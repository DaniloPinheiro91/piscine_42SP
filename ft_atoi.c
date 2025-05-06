/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:34:11 by dapinhei          #+#    #+#             */
/*   Updated: 2025/05/05 17:31:02 by dapinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	long int	sum;
	int			i;
	int			sign;

	i = 0;
	sign = 1;
	sum = 0;
	if (!(*str))
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] < '0' && str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (sum * 10) + str[i] - '0';
		i++;
	}
	return (sum * sign);
}
/*
#include <stdio.h>

int main()
{
	char str[] = " \n   -  - --++-+++1234ja123123k";
	char srt[] = " ----+32133asd3413";
	printf("%d", ft_atoi(str));
	printf("%s", "\n");
	printf("%d", ft_atoi(srt));
	return (0);
}
*/
