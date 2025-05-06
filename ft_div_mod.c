/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 06:01:11 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/23 06:22:15 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int a = 20;
	int b = 6;
	int div, mod;

	ft_div_mod(a, b, &div, &mod);
	printf("Div: %d, Mod: %d\n", div, mod); // Output: Div: 3, Mod: 2

	return 0;
}
*/
