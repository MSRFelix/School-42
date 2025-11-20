/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 08:25:28 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/18 13:59:22 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	arr = malloc((max - min) * sizeof(int));
	if (!(arr))
		return (arr);
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

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

