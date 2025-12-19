/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:53:51 by flanghof          #+#    #+#             */
/*   Updated: 2025/12/01 15:02:24 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t			i;
	size_t			total;
	unsigned char	*a;

	i = 0;
	if (nelem == 0 || elsize == 0)
		return (malloc(1));
	total = nelem * elsize;
	if (nelem != 0 && total / nelem != elsize)
		return (0);
	a = malloc(total);
	if (!a)
		return (0);
	while (i < total)
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
	int a = 1;
	size_t a = 1;
	size_t i = 0;
	}
	free(str1);
	//free(str2);
	return (0);
}
*/
