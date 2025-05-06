/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invalid_inputs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:57:39 by wsilveir          #+#    #+#             */
/*   Updated: 2025/04/27 12:57:40 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}

int	ft_str_space(char *str)
{	
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (count % 2 != 0)
		{
			if (str[count] != ' ')
				return (0);
		}
		count++;
	}
	if (count != 31)
		return (0);
	return (1);
}

int	invalid_args(int args)
{
	if (args > 2)
	{
		ft_putstr("Error: requires a single argument.\n");
		return (1);
	}
	else if (args < 2)
	{
		ft_putstr("Error: requires an argument.\n");
		return (1);
	}
	return (0);
}

int	invalid_inputs(int args, char *str)
{
	if (invalid_args(args))
	{
		return (1);
	}
	if (!ft_str_space(str))
	{
		ft_putstr("Error: invalid argument.\n");
		return (1);
	}
	return (0);
}
