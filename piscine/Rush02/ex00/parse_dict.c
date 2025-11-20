/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:14:18 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/21 13:18:12 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_filter_output(char *buffer, int last_call);

int	parse_to_end(char *buffer, int i)
{
	while (buffer[i] != '\n' && buffer[i] != 0)
		i++;
	return (i);
}

int	filter(char *buffer, int i, int last_call)
{
	if (ft_filter_output(&buffer[i], last_call) == 0)
		return (0);
	else
		free(buffer);
	return (1);
}
