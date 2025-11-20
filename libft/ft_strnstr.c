/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:17:25 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/19 13:19:45 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;
	char	*needle;

	i = -1;
	j = 0;
	hay = (char *) big;
	needle = (char *) little;
	if (!(needle[0]))
		return (hay);
	while (++i < len - 1)
	{
		if (hay[i] == needle[j])
		{
			j = 0;
			while (hay[i + j] && needle[j] && i + j < len
				&& hay[i + j] == needle[j])
				j++;
			if (needle[j] == 0 && i + j < len)
				return (&hay[i]);
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char	hay[199] = "Hello, this is a test";
	char	needle[100] = "Hello";
	printf("%p\n", ft_strnstr(hay, needle, 7));
	printf("%p\n", strnstr(hay, needle, 7));
	return (0);
}
*/
