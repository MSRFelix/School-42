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

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
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
	char	hay[] = "Hello there, i am now";
	int	a = 1;
	int	len = 1; 
	char	*str1 = ft_substr(hay, a, len);
	write(1, str1, len);
	free(str1);
	return (0);
}
*/
