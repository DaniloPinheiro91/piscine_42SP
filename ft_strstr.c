/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:00:38 by dapinhei          #+#    #+#             */
/*   Updated: 2025/05/05 11:13:20 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <unistd.h>

int main(void)
{
	char	string[] = "Este é um teste de procurar string";
	char	substring[] = "teste";
	char	*result;
	int	len = 0;

	result = ft_strstr(string, substring);

	if(result)
	{
		while (result[len] && result[len] != '\0')
			len++;
		write (1, result, len);
	}
	else
	{
		write(1, "Substring não encontrada", 24);
	}
	write (1, "\n", 1);
	return (0);
}
*/
