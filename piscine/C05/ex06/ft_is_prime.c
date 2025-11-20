/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 07:44:02 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/14 07:53:03 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	num;

	num = 2;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	while (num < (nb / 2) + 1)
	{
		if (nb % num == 0)
			return (0);
		num++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int	num;

	num = 54;
	printf("%i\n", ft_is_prime(num));
	return (0);
}
*/
