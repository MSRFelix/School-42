/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:28:30 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/19 08:50:01 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *) s;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char ptr[] = "GG";
	ft_bzero(ptr, 5);
	return (0);
}
*/
