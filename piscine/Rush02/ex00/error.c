/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiywang <yiywang@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:56:54 by yiywang           #+#    #+#             */
/*   Updated: 2025/09/21 14:52:04 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	valid_number(char *str)
{
	int	i;

	if (str == NULL || *str == '\0')
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	if (str[1] != 0 && str[0] == '0')
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}
