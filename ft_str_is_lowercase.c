/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowcase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:46:18 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/26 14:13:34 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 97 && *str <= 122))
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

	printf("Test 1: \"%s\" -> %d\n", test1, ft_str_is_lowercase(test1));
	printf("Test 2: \"%s\" -> %d\n", test2, ft_str_is_lowercase(test2));
	printf("Test 3: \"%s\" -> %d\n", test3, ft_str_is_lowercase(test3));
	printf("Test 4: \"%s\" -> %d\n", test4, ft_str_is_lowercase(test4));
	printf("Test 5: \"%s\" -> %d\n", test5, ft_str_is_lowercase(test5));

	return 0;
}
*/
