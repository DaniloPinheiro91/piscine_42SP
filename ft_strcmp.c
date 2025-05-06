/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:39:35 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/26 13:08:31 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
#include <stdio.h>

int main (void)
{
	char *teste1 = "teste";
	char *teste2 = "teste";
	char *teste3 = "Teste";
	char *teste4 = "T3sT3";

	printf("test 1: \"%s\" -> \"%s\" -> %d\n", 
	teste1, teste2, ft_strcmp(teste1, teste2));
        printf("test 2: \"%s\" -> \"%s\" -> %d\n", 
	teste1, teste3, ft_strcmp(teste1, teste3));
        printf("test 3: \"%s\" -> \"%s\" -> %d\n", 
	teste1, teste4, ft_strcmp(teste1, teste4));
        printf("test 4: \"%s\" -> \"%s\" -> %d\n", 
	teste1, teste1, ft_strcmp(teste1, teste1));
}
*/
