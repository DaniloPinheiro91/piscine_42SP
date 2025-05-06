/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 16:00:19 by dapinhei          #+#    #+#             */
/*   Updated: 2025/05/04 21:10:53 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUF_SIZE 8192

void	print_str(char *str)
{
	int	i;
	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	write(1, " ", 1);
}

char	*read_dict_file(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	char *buf = malloc(BUF_SIZE);
	if (!buf)
		return (0);
	int r = read(fd, buf, BUF_SIZE - 1);
	if (r < 0)
	{
		close(fd); free(buf);
		return (0);
	}
	buf[r] = '\0';
	close(fd);
	return (buf);
}

char	*find_in_dict(char *dict, char *key)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (dict[i]) 
	{
		while (dict[i + j] && key[j] && dict[i + j] == key[j])
			j++;
		if (key[j] == '\0' && dict[i + j] == ' ')
		{
			while (dict[i + j] && (dict[i + j] == ' ' || dict[i + j] == ':'))
				j++;
			char *res = malloc(64);
			if (!res)
				return (0);
			while (dict[i + j + k] && dict[i + j + k] != '\n')
			{
				res[k] = dict[i + j + k];
				k++;
			}
			res[k] = '\0';
			return (res);
		}
		while (dict[i] && dict[i] != '\n')
			i++;
		if (dict[i] == '\n')
			i++;
		j = 0;
	}
	return (0);
}

void	print_group(char *dict, char *grp)
{
	if (grp[0] != '0')
	{
		char unit_key[2] = { grp[0], '\0' };
		char *unit = find_in_dict(dict, unit_key);
		if (unit)
		{
			print_str(unit);
			free(unit);
		}
		char *hundred = find_in_dict(dict, "100");
		if (hundred) 
		{
			print_str(hundred);
			free(hundred);
		}
	}
	if (grp[1] == '1')
	{
		char teen_key[3] = { '1', grp[2], '\0' };
		char *teen = find_in_dict(dict, teen_key);
		if (teen)
		{
			print_str(teen);
			free(teen);
		}
	}
	else
	{
		if (grp[1] != '0')
		{
			char tens_key[3] = { grp[1], '0', '\0' };
			char *tens = find_in_dict(dict, tens_key);
			if (tens)
			{
				print_str(tens);
				free(tens);
			}
		}
		if (grp[2] != '0')
		{
			char unit_key[2] = { grp[2], '\0' };
			char *unit = find_in_dict(dict, unit_key);
			if (unit)
			{
				print_str(unit);
				free(unit);
			}
		}
	}
}

int	is_group_non_zero(char *grp)
{
	return (grp[0] != '0' || grp[1] != '0' || grp[2] != '0');
}

void	print_number(char *dict, char *nb, int len)
{
	int groups = (len + 2) / 3;
	int pad = groups * 3 - len;
	char **triplets = malloc(groups * sizeof(char *));
	if (!triplets)
		return;
	int i = 0;
	while (i < groups)
	{
		triplets[i] = malloc(4);
		if (!triplets[i])
			return;
		int j = 0;
		while (j < 3)
		{
			int index = i * 3 + j - pad;
			if (index < 0) 
				triplets[i][j] = '0';
			else
				triplets[i][j] = nb[index];
			j++;
		}
		triplets[i][3] = '\0';
		i++;
	}
	int non_zero_found = 0;
	char *magnitudes[] = { "", "thousand", "million", "billion", "trillion", 
		"quadrillion", "quintillion", "sextillion", "septillion", 
		"octillion", "nonillion", "decillion", "undecillion" };
	i = 0;
	while (i < groups)
	{
		if (is_group_non_zero(triplets[i]))
		{
			non_zero_found = 1;
			print_group(dict, triplets[i]);
			int magnitude_index = groups - i - 1;
			if (magnitude_index > 0)
			{
				char *magnitude = magnitudes[magnitude_index];
				if (magnitude && magnitude[0] != '\0')
				{
					print_str(magnitude);
				}
			}
		}
		free(triplets[i]);
		i++;
	}
	if (!non_zero_found)
	{
		char *zero = find_in_dict(dict, "0");
		if (zero)
		{
			print_str(zero);
			free(zero);
		}
	}
	free(triplets);
}

void	number_to_words(char *nb)
{
	char *dict = read_dict_file("numbers.dict");
	if (!dict)
		return;
	int len = 0;
	while (nb[len])
		len++;
	print_number(dict, nb, len);
	write(1, "\n", 1);
	free(dict);
}

int	main()
{
	number_to_words("345");       // three hundred forty five
	number_to_words("123321441213132123");        // nineteen
	number_to_words("70");        // seventy
	number_to_words("007");       // seven
	number_to_words("1000000");   // one million
	number_to_words("10313123131300000"); // one billion
	number_to_words("1000000000000300000005000000000000000"); // one undecillion
	return (0);
}
