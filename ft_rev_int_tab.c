/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 05:53:16 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/23 06:18:58 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + size -1 - i);
		*(tab + size -1 - i) = temp;
		i ++;
	}
}
/*
int main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;
	int i;

	ft_rev_int_tab(tab, size);

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");

	return 0;
}
*/
