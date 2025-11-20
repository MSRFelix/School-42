/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 07:24:40 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/19 07:59:44 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*storage;

	i = 0;
	j = 0;
	while (src[i] != 0)
		i++;
	storage = malloc((i + 1) * sizeof(char));
	if (storage == NULL)
		return (NULL);
	else
	{
		while (j < i)
		{
			storage[j] = src[j];
			j++;
		}
		storage[j] = 0;
	}
	storage[j] = 0;
	return (storage);
}

int	ft_string_len(char *string)
{
	int	i;

	i = 0;
	while (string[i] != 0)
		i++;
	return (i);
}

struct s_stock_str	*free_all(t_stock_str *sol, int i)
{
	while (i > 0)
		free(sol[i].copy);
	free(sol);
	return (sol);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*sol;
	int			i;

	i = -1;
	sol = malloc(sizeof(t_stock_str) * (ac + 1));
	if (sol == NULL)
		return (NULL);
	while (++i < ac)
	{
		sol[i].size = ft_string_len(av[i]);
		sol[i].str = av[i];
		sol[i].copy = ft_strdup(av[i]);
		if (sol[i].copy == NULL)
			return (free_all(sol, i));
	}
	sol[i].str = 0;
	sol[i].size = 0;
	sol[i].copy = 0;
	return (sol);
}
