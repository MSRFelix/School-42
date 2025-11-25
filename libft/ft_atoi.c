/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:03:45 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/24 16:21:02 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(const char *nptr)
{
	int	i;

	i = 0;
	while (nptr[i] == 32 || (nptr[i] > 8 && nptr[i] < 14))
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	double	sol;
	int		i;
	int		neg;

	sol = 0;
	i = ft_isspace(nptr);
	neg = 1;
	if (nptr[i] == '-' && nptr[i + 1])
		neg = -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i])
	{
		if (nptr[i] < 48 || nptr[i] > 57)
			break ;
		sol = sol * 10 + (nptr[i] - '0');
		if (sol > 2147483647 && neg == 1)
			return (2147483647);
		else if (sol > 2147483647)
			return (-2147483648);
		i++;
	}
	return (sol * neg);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%i\n", ft_atoi(argv[1]));
		printf("%i\n", atoi(argv[1]));
	}
	return (0);
}
*/
