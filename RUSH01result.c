/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:58:10 by wsilveir          #+#    #+#             */
/*   Updated: 2025/04/27 12:58:11 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	not_input_board(int i, int j)
{
	if (i != 0 && i != 5 && j != 0 && j != 5)
		return (1);
	return (0);
}

void	print_result(char m[6][6])
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < 6)
	{
		while (j < 6)
		{
			if (not_input_board(i, j))
			{
				ft_putchar(m[i][j]);
				if (j != 4)
					ft_putchar(' ');
			}
			j++;
		}
		if (not_input_board(i, j))
			ft_putchar('\n');
		j = 0;
		i++;
	}
}
