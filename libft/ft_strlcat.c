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

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_src;

	i = 0;
	j = 0;
	len_src = 0;
	while (src[len_src])
		len_src++;
	while (i < size - 1 && dst[i])
		i++;
	if (dst[i])
		return (len_src + 1);
	len_src += i;
	while (i < size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (i);
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
