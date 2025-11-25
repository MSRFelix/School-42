/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:52:56 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/24 17:56:11 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charcmp(char const *set, char c)
{
	int	found;
	int	j;

	found = 0;
	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			found = 1;
		j++;
	}
	return (found);
}

static unsigned int	find_start(char const *s1, char const *set)
{
	unsigned int	i;

	i = 0;
	while (s1[i])
	{
		if (!(ft_charcmp(set, s1[i])))
			break ;
		i++;
	}
	return (i);
}

static unsigned int	find_end(unsigned int end, char const *s1, char const *set)
{
	while (end-- > 0)
	{
		if (!(ft_charcmp(set, s1[end])))
			break ;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	end;
	char			*sol;

	end = (unsigned int) ft_strlen(s1);
	i = find_start(s1, set);
	j = 0;
	end = find_end(end, s1, set);
	if (end < i)
		return (0);
	sol = malloc(end - i + 1);
	if (!(sol))
		return (0);
	while (i < end + 1)
	{
		sol[j] = s1[i];
		i++;
		j++;
	}
	sol[j] = 0;
	return (sol);
}
/*
#include <stdio.h>

int	main(void)
{
	char const set[] = "g";
	char const text[] = "gffHeashgrfff";
	char	*sol = ft_strtrim(text, set);
	printf("%s", sol);
	free(sol);
	return (0);
}
*/
