/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 07:37:43 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/24 11:40:07 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*arr;

	i = 0;
	arr = malloc(length * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}

#include <stdio.h>
int	square(int num)
{
	return (num * num);
}

int	main(void)
{
	int	*sol;
	int arr[5] = {1, 2, 3, 4 ,5};
	sol = ft_map(arr, 5, square);
	for (int i = 0; i < 5; i++)
	{
		printf("%i\n", sol[i]);
	}
	return (0);
}

