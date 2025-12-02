/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:14:53 by flanghof          #+#    #+#             */
/*   Updated: 2025/12/01 14:48:00 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else if (c >= 48 && c <= 57)
		return (4);
	else if (c >= 97 && c <= 122)
		return (2);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("mine: %i\n", ft_isprint('('));
	printf("original: %i\n", isprint('('));
	printf("mine: %i\n", ft_isprint('A'));
	printf("original: %i\n", isprint('A'));
	printf("mine: %i\n", ft_isprint('7'));
	printf("original: %i\n", isprint('7'));
	printf("mine: %i\n", ft_isprint('	'));
	printf("original: %i\n", isprint('	'));
	printf("mine: %i\n", ft_isprint(' '));
	printf("original: %i\n", isprint(' '));
	printf("mine: %i\n", ft_isprint('V'));
	printf("original: %i\n", isprint('V'));
	return (0);
}
*/
