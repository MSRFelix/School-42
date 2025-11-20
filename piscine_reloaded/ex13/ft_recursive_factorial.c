/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 06:54:14 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/18 10:37:21 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	sol;

	sol = 1;
	if (nb >= 20)
		return (0);
	if (nb == 0)
		return (1);
	if (nb < 1)
		return (0);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%i\n", ft_recursive_factorial(atoi(argv[1])));
	return (0);
}
*/
