/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 12:18:12 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/19 12:42:19 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i > -1)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
/*
#include <string.h>
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char hay[11] = "here we go";
	char needle = '\0';

	printf("%p\n", ft_strrchr(hay, needle));
	printf("%p\n", strrchr(hay, needle));
	return (0);
}
*/
