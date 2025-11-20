/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 08:51:23 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/19 12:02:43 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (i - 1);
}
/*
#include <string.h>
#include <unistd.h>
int	main(void)
{
	char str1[5] = "Hell";
	char str2[4] = "";
	//ft_strlcpy(str2, str1, 4);
	strlcpy(str2, str1, 4);
	int i = 0;
	while (str2[i])
	{
		write(1, &str2[i], 1);
		i++;
	}
	return (0);
}
*/
