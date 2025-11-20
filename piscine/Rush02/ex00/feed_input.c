/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   feed_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:05:57 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/21 19:32:15 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		read_dict(char *input, int last_call, char *dict, int new_line);
void	feed_input(char **arr, char *dict);
void	free_terms(char **terms);

void	feed_input(char **arr, char *dict)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (arr[i] != 0)
		i++;
	len = i;
	while (j < len)
	{
		if (j == len - 1)
		{
			if (read_dict(arr[j], 1, dict, 1) == 0)
				return (free_terms(arr));
		}
		else
		{
			if (read_dict(arr[j], 0, dict, 1) == 0)
				return (free_terms(arr));
		}
		j++;
	}
	if (*arr[0] != '0')
		free_terms(arr);
}
