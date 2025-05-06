/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:57:05 by wsilveir          #+#    #+#             */
/*   Updated: 2025/04/27 13:06:30 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	not_input_board(int i, int j);
int	check_valid(char m[6][6], int row, int column);
int	valid_inputs(char m[6][6], int row, int column);
int	backtracking(char m[6][6], int l, int c);

int	try_next_cell(char m[6][6], int l, int c)
{
	if (c + 1 == 5)
		return (backtracking(m, l + 1, 1));
	return (backtracking(m, l, c + 1));
}

int	backtracking(char m[6][6], int l, int c)
{
	char	try;
	char	value;

	if (l == 5)
		return (1);
	try = '1';
	value = m[l][c];
	while (try <= '4')
	{
		if (value == '0')
			m[l][c] = try;
		if (!check_valid(m, l, c) && try == '4')
			m[l][c] = '0';
		if (value != '0' || check_valid(m, l, c))
			if (try_next_cell(m, l, c))
				return (1);
		try++;
	}
	m[l][c] = value;
	return (0);
}
