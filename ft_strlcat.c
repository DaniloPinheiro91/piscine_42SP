/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:55:04 by dapinhei          #+#    #+#             */
/*   Updated: 2025/05/05 13:51:45 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	c;

	i = 0;
	j = 0;
	c = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j])
		j++;
	if (i == size)
		return (size + j);
	while (src[c] && (i + c + 1) < size)
	{
		dest[i + c] = src[c];
		c++;
	}
	return (i + j);
}
/*
#include <unistd.h>

int main(void)
{
	char	string[30] = "Concatenacao";
	char	string2[] = " Funcionando";
	int	len = 0;

	ft_strlcat(string, string2, 30);
	while (string[len] != '\0')
	{
		len++;
	}
	write (1, string, len);
	write (1, "\n", 1);
	return (0);
}
*/
