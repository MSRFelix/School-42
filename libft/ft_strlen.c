/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:25:50 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/18 11:58:08 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%lu\n", strlen(argv[1]));
	return (0);
}
*/
