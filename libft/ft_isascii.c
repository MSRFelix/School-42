/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:11:45 by flanghof          #+#    #+#             */
/*   Updated: 2025/12/01 14:47:04 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("mine: %i\n", ft_isascii('a'));
	printf("original: %i\n", isascii('a'));
	printf("mine: %i\n", ft_isascii('A'));
	printf("original: %i\n", isascii('A'));
//	printf("mine: %i\n", ft_isascii('§'));
//	printf("original: %i\n", isascii('§'));
	printf("mine: %i\n", ft_isascii('t'));
	printf("original: %i\n", isascii('t'));
	printf("mine: %i\n", ft_isascii(' '));
	printf("original: %i\n", isascii(' '));
	printf("mine: %i\n", ft_isascii('~'));
	printf("original: %i\n", isascii('~'));
//	printf("mine: %i\n", ft_isascii('ä'));
//	printf("original: %i\n", isascii('ä'));
	return (0);
}
*/
