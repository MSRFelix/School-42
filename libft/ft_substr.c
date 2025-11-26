/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:53:21 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/24 15:53:31 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	length;
	char	*str;

	i = 0;
	length = ft_strlen(s);
	if (start >= length)
		return (ft_strdup(""));
	if (start + len > length)
		str = malloc(length - start + 1);
	else
		str = malloc(len + 1);
	if (!(str))
		return (0);
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
#include <unistd.h>
int	main(void)
{
	char	hay[] = "Hellox";
	int	a = 3;
	int	len = 3;
	int	i = 0;
	char	*str1 = ft_substr(hay, a, len);
	if (!str1)
		return (0);
	while (str1[i])
		i++;
	write(1, str1, i);
	free(str1);
	return (0);
}
*/
