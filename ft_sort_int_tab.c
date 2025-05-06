/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 06:32:43 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/23 07:19:31 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (*(tab + i) > *(tab + j))
			{
				temp = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {42, 7, 3, 19, 1, 88, 5};
	int	size = sizeof(tab) / sizeof(tab[0]);
	int	i;

	printf("Antes da ordenação:\n");
	for (i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	ft_sort_int_tab(tab, size);

	printf("Depois da ordenação:\n");
	for (i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	return (0);
}
*/
