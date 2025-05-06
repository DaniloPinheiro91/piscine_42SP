/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_validations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:57:24 by wsilveir          #+#    #+#             */
/*   Updated: 2025/04/27 12:57:26 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	scan_boards_to_fill(int i, int j);

void	check_fill_1x4_topbottom(int i, int j, char m[6][6], int board)
{
	if (m[i][j] != '1')
		return ;
	if (board == 1)
	{
		m[i + 1][j] = '4';
		if (m[5][j] == '2')
			m[4][j] = '3';
	}
	else if (board == 2)
	{
		m[i - 1][j] = '4';
		if (m[0][j] == '2')
			m[1][j] = '3';
	}
}

void	check_fill_1x4_leftright(int i, int j, char m[6][6], int board)
{
	if (m[i][j] != '1')
		return ;
	if (board == 3)
	{
		m[i][j + 1] = '4';
		if (m[i][5] == '2')
			m[i][4] = '3';
	}
	else if (board == 4)
	{
		m[i][j - 1] = '4';
		if (m[i][0] == '2')
			m[i][1] = '3';
	}
}

void	check_fill_4x1_vert(int i, int j, char m[6][6], int board)
{
	if (m[i][j] != '4')
		return ;
	if (board == 1)
	{
		m[i + 1][j] = '1';
		m[i + 2][j] = '2';
		m[i + 3][j] = '3';
		m[i + 4][j] = '4';
	}
	else if (board == 2)
	{
		m[i - 1][j] = '1';
		m[i - 2][j] = '2';
		m[i - 3][j] = '3';
		m[i - 4][j] = '4';
	}
}

void	check_fill_4x1(int i, int j, char m[6][6], int board)
{
	if (m[i][j] != '4')
		return ;
	if (board == 3)
	{
		m[i][j + 1] = '1';
		m[i][j + 2] = '2';
		m[i][j + 3] = '3';
		m[i][j + 4] = '4';
	}
	else if (board == 4)
	{
		m[i][j - 1] = '1';
		m[i][j - 2] = '2';
		m[i][j - 3] = '3';
		m[i][j - 4] = '4';
	}
	else
		check_fill_4x1_vert(i, j, m, board);
}

void	auto_complet(int i, int j, char m[6][6], int board)
{
	check_fill_1x4_topbottom(i, j, m, board);
	check_fill_1x4_leftright(i, j, m, board);
	check_fill_4x1(i, j, m, board);
}
