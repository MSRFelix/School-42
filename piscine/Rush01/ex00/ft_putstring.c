/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 07:37:27 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/13 07:39:27 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstring(char *input);

void	ft_putstring(char *input)
{
	int	i;

	i = 0;
	while (input[i] != 0)
		i++;
	write(1, input, i);
}
