/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:23:05 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/17 07:04:57 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*arr;
	int	diff;
	int	i;

	if (min >= max)
		return (NULL);
	diff = max - min;
	arr = malloc(diff * sizeof(int));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < diff)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	i;
	min = 0;
	max = 101;
	i = -1;
	int *arr = ft_range(min, max);
	while (++i < (max - min))
		printf("%i\n", arr[i]);
	free(arr);
	return (0);
}
*/
