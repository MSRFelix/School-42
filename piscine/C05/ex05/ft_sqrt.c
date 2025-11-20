/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 07:33:55 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/15 07:20:55 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	left;
	int	right;
	int	middle;

	left = 2;
	right = nb / 2 + 1;
	if (nb < 1)
		return (0);
	else if (nb == 1)
		return (1);
	while (left <= right)
	{
		middle = (left + right) / 2;
		if (middle * middle == nb)
			return (middle);
		else if (middle * middle > nb)
			right = middle -1;
		else
			left = middle + 1;
	}
	return (0);
}
/*	
{
	int	num;

	num = 0;
	if (nb < 1)
		return (0);
	else if (nb == 1)
		return (1);
	while (num < (nb / 2) + 1)
	{
		if (num * num == nb)
			return (num);
		else if (num * num > nb)
			return (0);
		num++;
	}
	return (0);
}
#include <stdio.h>
int	main(void)
{
	int	n;
	int  n2 = 36;
	int n3 = 49;
	int n4 = 1.2;
	int n5 = 17;
	int n6 = 100;
	int n7 = 144;

	n = 16;
	printf("%i\n", ft_sqrt(n));
	printf("%i\n", ft_sqrt(n2));
	printf("%i\n", ft_sqrt(n3));
	printf("%i\n", ft_sqrt(n4));
	printf("%i\n", ft_sqrt(n5));
	printf("%i\n", ft_sqrt(n6));
	printf("%i\n", ft_sqrt(n7));

       return (0);
}
*/
