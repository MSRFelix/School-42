/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:53:51 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/24 17:21:08 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	if (nelem == 0 || elsize == 0)
		return (0);
	if (nelem != 0 && elsize != 0 && nelem > SIZE_MAX / elsize)
		return (0);
	a = malloc(nelem * elsize);
	if (!(a))
		return (0);
	while (i < nelem * elsize)
	{
		a[i] = 0;
		i++;
	}
	return ((void *) a);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>

#include <limits.h>
int	main(void)
{
	//int a = 1;
	size_t a = 1;
	dprintf(1, "MAX: %zu\n", SIZE_MAX);
	//                    18446744073709551615
	size_t b = SIZE_MAX - 18446744000000000000u;
	dprintf(1, "MAX: %zu\n", b);
	size_t i = 0;
	int	*str1 = calloc(a, b);
	if (!str1)
		dprintf(2, "Not enough mem\n");
	int	*str2 = ft_calloc(a, b);
	if (!str2)
		dprintf(2, "Not enough mem\n");
	i = 0;
	while (i < a)
	{
		//dprintf(1, "%d", str1[i]);
		i++;
	}
	i = 0;
	write(1,"\n", 1);
	while (i < a)
	{
		dprintf(1, "%d", str2[i]);
		i++;
	}
	free(str1);
	//free(str2);
	return (0);
}
*/
