/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:32:46 by dapinhei          #+#    #+#             */
/*   Updated: 2025/04/26 14:19:47 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 31 && *str <= 126))
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
	char *test1 = "[]]";
	char *test2 = ":";
	char *test3 = "1234567";
	char *test4 = "";
	char *test5 = "@";

	printf("Test 1: \"%s\" -> %d\n", test1, ft_str_is_printable(test1));
	printf("Test 2: \"%s\" -> %d\n", test2, ft_str_is_printable(test2));
	printf("Test 3: \"%s\" -> %d\n", test3, ft_str_is_printable(test3));
	printf("Test 4: \"%s\" -> %d\n", test4, ft_str_is_printable(test4));
	printf("Test 5: \"%s\" -> %d\n", test5, ft_str_is_printable(test5));

	return 0;
}
*/
