/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 12:44:06 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/19 12:56:05 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;
	size_t			i;

	i = 0;
	while (s1[i] && i < n - 1 && s1[i] == s2[i])
		i++;
	c1 = s1[i];
	c2 = s2[i];
	return (c1 - c2);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str1[30] = "Hel@#%^5lo";
	char	str2[30] = "Hel@e#%^d5loo";

	printf("%d\n", ft_strncmp(str1, str2, 6));
	printf("%d\n", strncmp(str1, str2, 6));
	return (0);
}
*/
