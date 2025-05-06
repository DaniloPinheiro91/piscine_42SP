/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:32:47 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/25 18:24:38 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize( char *str)
{
	int	i;
	int	control;

	i = 0;
	control = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && control)
			str[i] -= 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && !control)
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
			control = 0;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			control = 0;
		else if (str[i] >= '0' && str[i] <= '9')
			control = 0;
		else
			control = 1;
		i++;
	}
	return (str);
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

    ft_strcapitalize(texto);
    ft_putstr(texto);

        return (0);
}
*/
