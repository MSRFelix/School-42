/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 09:09:11 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/24 17:45:36 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (dst_len == size)
		return (size + src_len);
	i = dst_len;
	while (i + 1 < size && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dst[i] = 0;
	return (dst_len + src_len);
}
/*
#include <bsd/string.h>
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char str1[50] = "ill";
	char str2[40] = "sdfadfsadf nsdfo";
	int i = 0;
	//printf("%zu\n", ft_strlcat(str2, str1, 14));
	printf("%zu\n", strlcat(str2, str1, 14));
	while (str2[i])
	{
		write(1, &str2[i], 1);
		i++;
	}
	return (0);
}
*/
