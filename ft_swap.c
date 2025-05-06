/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 05:36:24 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/23 06:21:18 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
/*
int main(void)
{
	int x = 5;
	int y = 10;

	printf("antes da troca: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("depois da troca:  x = %d, y = %d\n", x, y);

	return 0;
}*/
