/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:52:36 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/13 17:02:46 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	sol;

	i = 0;
	sol = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		sol *= nb;
		power--;
	}
	return (sol);
}
/*
#include <stdio.h>
int	main(void)
{
	int	num;
	int	pow;

	num = -3;
	pow = 3;
	printf("%i\n", ft_iterative_power(num, pow)); 
	return (0);
}
*/
