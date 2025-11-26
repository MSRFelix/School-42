/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:08:23 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/19 13:15:44 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (p1[i] && i < n - 1 && p1[i] == p2[i])
		i++;
	c1 = p1[i];
	c2 = p2[i];
	return (c1 - c2);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str1[30] = "2Hely@#%^5lo";
	char	str2[30] = "H3el@e#%^d5loo";

	printf("%d\n", ft_memcmp(str1, str2, 0));
	printf("%d\n", memcmp(str1, str2, 0));
	return (0);
}
*/
