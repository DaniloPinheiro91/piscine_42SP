/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_validations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:58:03 by wsilveir          #+#    #+#             */
/*   Updated: 2025/04/27 12:58:04 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	scan_boards_to_fill(int i, int j)
{
	if (i == 0 && j >= 1 && j <= 4)
		return (1);
	if (i == 5 && j >= 1 && j <= 4)
		return (2);
	if (j == 0 && i >= 1 && i <= 4)
		return (3);
	if (j == 5 && i >= 1 && i <= 4)
		return (4);
	return (0);
}

int	valid_row(char m[6][6], int row, int column)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		if (i != column && m[row][column] == m[row][i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	valid_column(char m[6][6], int row, int column)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		if (i != row && m[row][column] == m[i][column])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_valid(char m[6][6], int row, int column)
{
	if (valid_row(m, row, column) && valid_column(m, row, column))
	{
		return (1);
	}
	return (0);
}
