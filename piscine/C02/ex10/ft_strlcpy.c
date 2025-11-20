/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:31:18 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/17 12:51:25 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	count_to_return;

	counter = 0;
	count_to_return = 0;
	while (counter < size - 1 && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
		count_to_return++;
	}
	while (src[count_to_return] != '\0')
		count_to_return++;
	dest[counter] = '\0';
	return (count_to_return);
}
