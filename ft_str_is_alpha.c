/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:32:56 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/23 17:53:16 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		{	
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
    // Alguns testes
    char *test1 = "Teste";
    char *test2 = "42School";
    char *test3 = "1234567";
    char *test4 = "";
    char *test5 = "@123asfa";

    printf("Test 1: \"%s\" -> %d\n", test1, ft_str_is_alpha(test1)); 
    printf("Test 2: \"%s\" -> %d\n", test2, ft_str_is_alpha(test2)); 
    printf("Test 3: \"%s\" -> %d\n", test3, ft_str_is_alpha(test3));
    printf("Test 4: \"%s\" -> %d\n", test4, ft_str_is_alpha(test4));
    printf("Test 5: \"%s\" -> %d\n", test5, ft_str_is_alpha(test5));

    return 0;
}
*/
