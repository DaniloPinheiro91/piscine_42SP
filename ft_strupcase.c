/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:32:47 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/26 18:20:45 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
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

    ft_strupcase(texto);
    ft_putstr(texto);

        return (0);
}
*/
