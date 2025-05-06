/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:01:02 by wsilveir          #+#    #+#             */
/*   Updated: 2025/04/25 18:01:03 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_result(char m[6][6], char *input);
void	first_validations(char m[6][6]);
int		backtracking(char m[6][6], int l, int c);
void	ft_putstr(char *str);
void	auto_complet(int i, int j, char m[6][6], int board);
int		scan_boards_to_fill(int i, int j);

void	first_validations(char m[6][6])
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			auto_complet(i, j, m, scan_boards_to_fill(i, j));
			j++;
		}
		i++;
	}
}

void	matriz_genarate(char m[6][6], char *input)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			if (i == 0 && j != 0 && j != 5)
				m[i][j] = input[j - 1];
			else if (i == 5 && j != 0 && j != 5)
				m[i][j] = input[j + 3];
			else if (j == 0 && i != 0 && i != 5)
				m[i][j] = input[i + 7];
			else if (j == 5 && i != 0 && i != 5)
				m[i][j] = input[i + 11];
			else
				m[i][j] = '0';
			j++;
		}
		i++;
	}
}

int	store_input(char *str, char *input)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || str[i - 1] == ' ')
		{
			input[j] = str[i];
			if (input[j] > '4' || input[j] < '1')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	start(char *str)
{
	char	m[6][6];
	char	input[16];

	if (!store_input(str, input))
	{
		ft_putstr("Error: invalid argument.\n");
		return ;
	}
	matriz_genarate(m, input);
	first_validations(m);
	backtracking(m, 1, 1);
	print_result(m, input);
}
