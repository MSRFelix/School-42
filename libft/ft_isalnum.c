/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:07:57 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/18 12:10:50 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("mine: %i\n", ft_isalnum('a'));
	printf("original: %i\n", isalnum('a'));
	printf("mine: %i\n", ft_isalnum('1'));
	printf("original: %i\n", isalnum('1'));
	printf("mine: %i\n", ft_isalnum('%'));
	printf("original: %i\n", isalnum('%'));
	printf("mine: %i\n", ft_isalnum('/'));
	printf("original: %i\n", isalnum('/'));
	printf("mine: %i\n", ft_isalnum(' '));
	printf("original: %i\n", isalnum(' '));
	printf("mine: %i\n", ft_isalnum('4'));
	printf("original: %i\n", isalnum('4'));
	printf("mine: %i\n", ft_isalnum('G'));
	printf("original: %i\n", isalnum('G'));
	printf("mine: %i\n", ft_isalnum('?'));
	printf("original: %i\n", isalnum('?'));
	printf("mine: %i\n", ft_isalnum('A'));
	printf("original: %i\n", isalnum('A'));
	printf("mine: %i\n", ft_isalnum('2'));
	printf("original: %i\n", isalnum('2'));
	printf("mine: %i\n", ft_isalnum('!'));
	printf("original: %i\n", isalnum('!'));
	printf("mine: %i\n", ft_isalnum('&'));
	printf("original: %i\n", isalnum('&'));
	printf("mine: %i\n", ft_isalnum('	'));
	printf("original: %i\n", isalnum('	'));
	printf("mine: %i\n", ft_isalnum('T'));
	printf("original: %i\n", isalnum('T'));
	printf("mine: %i\n", ft_isalnum('R'));
	printf("original: %i\n", isalnum('R'));
	printf("mine: %i\n", ft_isalnum('{'));
	printf("original: %i\n", isalnum('{'));



	return (0);
}
*/
