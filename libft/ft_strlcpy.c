/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 08:51:23 by flanghof          #+#    #+#             */
/*   Updated: 2025/12/01 15:28:07 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	while (i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (len);
}
/*
#include <bsd/string.h>
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char str1[12] = "Helllll";
	char str2[4] = "";
	char str3[12] = "Helllll";
	char str4[4] = "";
	//size_t x = ft_strlcpy(str2, str1, 0);
	size_t y = strlcpy(str4, str3, 0);
	int i = 0;
	while (str2[i])
	{
		write(1, &str2[i], 1);
		i++;
	}
	i = 0;
	write(1, "\n", 1);
	while (str4[i])
	{
		write(1, &str4[i], 1);
		i++;
	}
//	printf("\nmine: %zu\n", x);
	printf("original: %zu\n", y);
	return (0);
}
*/
