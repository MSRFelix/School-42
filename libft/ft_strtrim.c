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

#include <stdlib.h>

static int	ft_len(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

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

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		end;
	char	*sol;

	end = ft_len(s1);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (!(ft_charcmp(set, s1[i])))
			break ;
		i++;
	}
	while (end-- > 0)
	{
		if (!(ft_charcmp(set, s1[end])))
			break ;
	}
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
	char const set[] = "gf";
	char const text[] = "gffHeashgrfff";
	char	*sol = ft_strtrim(text, set);
	printf("%s", sol);
	free(sol);
	return (0);
}
*/
