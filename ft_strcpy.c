/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:29:04 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/23 13:45:02 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "testando strcpy";
	char	dest[17]; // separa espaço o suficiente para armazenar

	// função ft_strcpy para copiar de src para dest
	ft_strcpy(dest, src);

	// Imprime o resultado
	printf("Fonte: %s\n", src);
	printf("Destino: %s\n", dest);

	return 0;
}*/
