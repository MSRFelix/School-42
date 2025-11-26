/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:53:09 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/24 15:53:11 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_len(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*sol;

	if (!s1 || !s2)
		return (0);
	i = -1;
	len1 = ft_len(s1);
	len2 = ft_len(s2);
	sol = malloc(len1 + len2 + 1);
	if (!(sol))
		return (0);
	while (++i < len1)
		sol[i] = s1[i];
	i = 0;
	while (i < len2)
	{
		sol[len1 + i] = s2[i];
		i++;
	}
	sol[len1 + i] = 0;
	return (sol);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hel";
	char	str2[] = "R  ig   ht";
	char	*sol = ft_strjoin(str1, str2);
	printf("%s\n", sol);
	free(sol);
	return (0);
}
*/
