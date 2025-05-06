/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:32:47 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/26 18:44:59 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			*str = *str + 32;
		str++;
	}
	return (start);
}
/*
#include <stdio.h>
#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(*(str +i) != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }

}


int     main(void)
{
        char texto[] = "testando";

    ft_strlowcase(texto);
    ft_putstr(texto);

        return (0);
}
*/
