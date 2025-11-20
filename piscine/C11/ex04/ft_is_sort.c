/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 08:00:20 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/24 06:37:39 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 1;
	desc = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			asc = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			desc = 0;
		i++;
	}
	return (asc || desc);
}
/*
#include <stdio.h>
int	comp(int i, int j)
{
	if (i > j)
		return (1);
	else if (i < j)
		return (-1);
	else
		return (0);
}

int	main(void)
{
	int	arr[7] = {1,1 , 1, 2, 4, 5, 7};
	printf("%i\n", ft_is_sort(arr, 7, comp));
	return (0);
}
*/
