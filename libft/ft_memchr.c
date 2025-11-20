/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 12:57:40 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/19 13:06:30 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;
	size_t			i;

	b = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (b[i] == c)
			return (&b[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str[100] = "hello here we are";
	char	c = 'l';
	printf("%p\n", memchr(str, c, 2));
	printf("%p\n", ft_memchr(str, c, 2));
	return (0);
}
*/
