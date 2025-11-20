/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:16:49 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/16 07:20:51 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char **s1, char **s2);
void	ft_sort_int_tab(char *tab[], int size);

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

	i = 1;
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

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	ft_sort_int_tab(argv, argc);
	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
