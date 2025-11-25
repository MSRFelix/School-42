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

static char	*return_sol(int n)
{
	char	*sol;
	if (n == -2147483648)
		sol = malloc(12);
		sol = "-2147483648";
		return (sol);
	if (n == 0)
	{
		sol = malloc(2);
		sol = "0";
		return (sol);
	}
	return (sol);
}

char	*ft_itoa(int n)
{
	char	buffer[12];
	char	*sol;
	int		i;
	int		j;
	int		neg;

	i = 0;
	neg = 0;
	if (n == -2147483648)
		return (return_sol(-2147483648));
	else if (n == 0)
		return(return_sol(0));
	else
	{
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
		while (--i >= 0)
		{
			sol[j] = buffer[i];
			j++;
		}
		if (neg)
			sol[0] = '-';
	}
	return (sol);
}

	sol = malloc(ft_intlen(n) + 1);
	if (!(sol))
		return (0);
	else if (n == -2147483648)
		sol = "-2147483648";
	else if (n == 0)
		sol = "0";
	else
	{
		if (n < 0)
		{
			sol[0] = '-';
			n = -n;
			j = 1;
		}
		while (n > 0)
		{
			buffer[i] = (n % 10 + '0');
			n /= 10;
			i++;
		}
		while (--i >= 0)
		{
			sol[j] = buffer[i];
			j++;
		}
		sol[j] = 0;
	}
	return (sol);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char *argv[])
{
	char	*num = ft_itoa(atoi(argv[1]));
	int	number = 500;
	if (argc == 2)
	{
		printf("%s\n", num);
		free(num);
	}
	else
		printf("%s\n", ft_itoa(number));
	return (0);
}
*/
