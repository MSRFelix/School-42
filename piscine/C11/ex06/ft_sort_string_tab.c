/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 08:47:26 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/23 09:14:34 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_string_tab(char **tab);

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	c_1;
	unsigned char	c_2;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	c_1 = s1[i];
	c_2 = s2[i];
	if (c_1 > c_2)
		return (1);
	else if (c_2 > c_1)
		return (-1);
	else
		return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort_int_tab(char *tab[], int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[i], tab[j]) == 1)
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

void	ft_sort_string_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != 0)
		i++;
	ft_sort_int_tab(tab, i);
}
/*
#include <stdio.h>
int	main(void)
{
	int i = 0;
	char *arr[6] = {"fghfgh", "3255", "!@@##", "3245", "fg", 0};
	ft_sort_string_tab(arr);
	while (arr[i] != 0)
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}
*/
