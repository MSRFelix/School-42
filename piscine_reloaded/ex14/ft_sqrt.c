/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 06:57:27 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/18 07:33:28 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	left;
	int	right;
	int	middle;

	left = 0;
	right = (nb / 2) + 1;
	if (nb < 1 || nb > 2147395600)
		return (0);
	middle = (left + right) / 2;
	if (middle > 46340)
		right = 46340;
	while (left <= right)
	{
		middle = (left + right) / 2;
		if (middle * middle == nb)
			return (middle);
		else if (middle * middle > nb)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%i\n", ft_sqrt(atoi(argv[1])));
	return (0);
}
*/
