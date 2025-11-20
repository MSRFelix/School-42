/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 07:54:52 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/14 08:14:21 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	prime;
	int	num;
	int	check;

	prime = nb;
	num = 1;
	if (nb <= 2)
		return (2);
	while (prime)
	{
		check = 0;
		while (++num < (prime / 2) + 1)
		{
			if (prime % num == 0)
			{
				check = 1;
				break ;
			}
		}
		if (check == 0)
			return (prime);
		num = 1;
		prime++;
	}
	return (0);
}
/*
#include <stdio.h>
int 	main(void)
{
	int num;

	num = 44;
	printf("%i\n", ft_find_next_prime(num));
	return (0);
}
*/
