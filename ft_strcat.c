/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:27:42 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/27 17:17:50 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*concat;

	concat = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (concat);
}
/*
#include <stdio.h>

int	main(void)
{
	char	string[50] = "teste";
	char	*string2 = " funcionando";

	printf("resultado: \"%s\"\n", ft_strcat(string, string2));
	return (0);
}
*/
