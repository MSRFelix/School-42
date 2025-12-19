/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:00:23 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/18 12:04:08 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("mine: %i\n", ft_isalpha('a'));
	printf("original: %i\n", isalpha('a'));
	printf("mine: %i\n", ft_isalpha('A'));
	printf("original: %i\n", isalpha('A'));
	printf("mine: %i\n", ft_isalpha(' '));
	printf("original: %i\n", isalpha(' '));
	printf("mine: %i\n", ft_isalpha('1'));
	printf("original: %i\n", isalpha('1'));
	printf("mine: %i\n", ft_isalpha('q'));
	printf("original: %i\n", isalpha('q'));
	printf("mine: %i\n", ft_isalpha('W'));
	printf("original: %i\n", isalpha('W'));
	printf("mine: %i\n", ft_isalpha('{'));
	printf("original: %i\n", isalpha('{'));
	return (0);
}
*/
