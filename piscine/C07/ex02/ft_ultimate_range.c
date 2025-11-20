/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 07:06:09 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/17 09:19:12 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = max - min;
	*range = malloc(diff * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < diff)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (diff);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	min = 5;
	max = 15;
	int	i;
	int	*ptr;
	int x = ft_ultimate_range(&ptr, min, max);

	printf("%i\n", x);
	if (x == -1)
	{
		printf("malloc failed\n");
		return (0);
	}
	i = -1;
	while (++i < (max - min))
		printf("%i\n", ptr[i]);
	free(ptr);
	return (0);
}
*/
