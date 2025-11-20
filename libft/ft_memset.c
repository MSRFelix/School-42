/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:21:20 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/19 08:48:30 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *) s;
	while (i < n)
	{
		a[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int i = 0;
	unsigned char ptr[7] = "GG";
	//printf("%p\n", ft_memset(ptr, 'a', 5));
	printf("%p\n", memset(ptr, 'a', 5));
	while (ptr[i])
	{
		printf("%c", ptr[i]);
		i++;
	}
	return (0);
}
*/
