/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:22:35 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/16 14:53:58 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	sol;

	sol = 1;
	if (nb == 0)
		return (1);
	if (nb < 1)
		return (0);
	while (nb > 0)
	{
		sol *= nb;
		nb--;
	}
	return (sol);
}
/*
#include <stdio.h>
int	main(void)
{
	int	num;

	num = 0;
	printf("%i\n", ft_iterative_factorial(num));
	return (0);
}
*/
