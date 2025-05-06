/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:18:56 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/29 07:09:22 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*concat;

	concat = dest;
	i = 0;
	while (concat[i] != '\0')
	{
		concat++;
	}
	while (i < nb && src[i] != '\0')
	{
		concat[i] = src[i];
		i++;
	}
	concat[i] = '\0';
	return (dest);
}
/*
#include <unistd.h>

int main(void)
{
	char	string[50] = "Teste";
	char	string2[] = " Funcionando";
	int len = 0;

	ft_strncat(string, string2, 20);
	while (string[len] != '\0')
	{	
		len++;
	}
	write (1, string, len);
	write (1, "\n", 1);

	return (0);

}
*/
