/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:52:11 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/24 18:19:06 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*return_sol(int n)
{
	char	*sol;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
	{
		sol = malloc(2);
		sol[0] = '0';
		sol[1] = 0;
		return (sol);
	}
	sol = 0;
	return (sol);
}

static char	*calculate(int n, int i, int j, int neg)
{
	char	buffer[12];
	char	*sol;

	if (n < 0)
	{
		j++;
		neg = 1;
		n = -n;
	}
	while (n > 0)
	{
		buffer[i] = (n % 10 + '0');
		n /= 10;
		i++;
	}
	sol = malloc(i + neg + 1);
	if (neg)
		sol[0] = '-';
	while (--i >= 0)
	{
		sol[j] = buffer[i];
		j++;
	}
	sol[j] = 0;
	return (sol);
}

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return (return_sol(-2147483648));
	else if (n == 0)
		return (return_sol(0));
	else
		return (calculate(n, 0, 0, 0));
}
/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char *argv[])
{
	char	*num = ft_itoa(atoi(argv[1]));
	int	number  = 0;
	int	number2  = -2147483648;
	int	number3  = 10000;
	int	number4  = 2147483647;
	int	number5  = -1234;
	int	number6  = 555;
	if (argc == 2)
	{
		printf("%s\n", num);
		free(num);
	}
	else
	{
		printf("0: %s  ###  ", ft_itoa(number));
		printf("-2147483648: %s  ###  ", ft_itoa(number2));
		printf("10000: %s  ###  ", ft_itoa(number3));
		printf("2147483647: %s  ###  ", ft_itoa(number4));
		printf("-1234: %s  ###  ", ft_itoa(number5));
		printf("555: %s  ###  ", ft_itoa(number6));
	}
	return (0);
}
*/
