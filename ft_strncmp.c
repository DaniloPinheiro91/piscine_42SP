/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:04:39 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/27 15:25:46 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *s1 && *s2 && (unsigned char)*s1 == (unsigned char)*s2)
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*teste1 = "teste";
	char	*teste2 = "teste";
	char	*teste3 = "Teste";
	char	*teste4 = "T3sT3";
	int n = 10;

	printf("teste 1: \"%s\" -> \"%s\" -> %d\n", 
	teste1, teste2, ft_strncmp(teste1, teste2, n));
	printf("teste 2: \"%s\" -> \"%s\" -> %d\n", 
	teste1, teste3, ft_strncmp(teste1, teste3, n));
	printf("teste 3: \"%s\" -> \"%s\" -> %d\n", 
	teste1, teste4, ft_strncmp(teste1, teste4, n));
	printf("teste 4: \"%s\" -> \"%s\" -> %d\n", 
	teste1, teste1, ft_strncmp(teste1, teste1, n));
}
*/
