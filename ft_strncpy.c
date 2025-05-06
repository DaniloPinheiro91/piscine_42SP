/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:47:03 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/23 16:24:32 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	iterator;

	iterator = 0;
	while (iterator < n && *(src + iterator))
	{
		*(dest + iterator) = *(src + iterator);
		iterator++;
	}
	while (iterator < n)
	{
		*(dest + iterator) = '\0';
		iterator++;
	}
	return (dest);
}
/*
int main(void)
{
	char	src[] = "testando strncpy";
	char	dest[17];
	int	e = 17;

	ft_strncpy(dest, src, e);

	printf("Fonte: %s\n", src);
	printf("Destino: %s\n", dest);
	printf("espaço reservado: %d\n", e);

	return 0;
}
*/
