/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 09:48:56 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/19 11:51:53 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;
	size_t			i;

	uc = (unsigned char) c;
	i = 0;
	while (s[i] && (unsigned char) s[i] != uc)
		i++;
	if ((unsigned char) s[i] == 0 && uc != 0)
		return (0);
	return ((char *)& s[i]);
}
/*
#include <string.h>
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char hay[100] = "here we go";
	char needle = '\0';

	printf("%p\n", hay);
	printf("%p\n", ft_strchr(hay, needle));
	printf("%p\n", strchr(hay, needle));
	return (0);
}
*/
