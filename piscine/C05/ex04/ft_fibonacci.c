/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:14:34 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/14 07:33:14 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	int	first;
	int	second;

	first = 0;
	second = 1;
	if (index < 0)
		return (-1);
	else if (index == first)
		return (first);
	else if (index == second)
		return (second);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int	main(void)
{
	int	num;

	num = -3;
	printf("%i", ft_fibonacci(num));
}
*/
