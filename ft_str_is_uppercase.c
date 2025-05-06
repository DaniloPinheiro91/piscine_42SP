/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:46:18 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/26 14:14:56 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 65 && *str <= 90))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *test1 = "Teste";
	char *test2 = "42School";
	char *test3 = "1234567";
	char *test4 = "";
	char *test5 = "@123asfa";

	printf("Test 1: \"%s\" -> %d\n", test1, ft_str_is_uppercase(test1));
	printf("Test 2: \"%s\" -> %d\n", test2, ft_str_is_uppercase(test2));
	printf("Test 3: \"%s\" -> %d\n", test3, ft_str_is_uppercase(test3));
	printf("Test 4: \"%s\" -> %d\n", test4, ft_str_is_uppercase(test4));
	printf("Test 5: \"%s\" -> %d\n", test5, ft_str_is_uppercase(test5));

	return 0;
}
*/
