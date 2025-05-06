/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 11:35:49 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/20 19:07:30 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);

void	rush(int x, int y)
{
	int	row;
	int	c;

	row = 0;
	while (row < y)
	{
	c = 0;
		while (c < x)
		{
			if ((row == 0 && c == 0) || (row == y - 1 && c == 0))
				ft_putchar('/');
			else if ((row == 0 && c == x - 1) || (row == y - 1 && c == x - 1))
				ft_putchar('\\');
			else if (row == 0 || row == y - 1 || c == 0 || c == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		row++;
	}
}

int	validation(int x, int y)
{
	if ((x <= 0 || y <= 0) || x > 9999 || y > 9999)
	{
		return (0);
	}
	return (0);
}
