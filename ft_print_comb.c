/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 06:02:00 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/18 06:15:58 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	one;
	char	two;
	char	three;

	one = '0';
	while (one <= '7')
	{
		two = one + 1;
		while (two <= '8')
		{
			three = two + 1;
			while (three <= '9')
			{
				write(1, &one, 1);
				write(1, &two, 1);
				write(1, &three, 1);
				if (one == '7' && two == '8' && three == '9')
					return ;
				three++;
				write(1, ",", 1);
			}
			two++;
		}
		one++;
	}
}
