/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:04:34 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/18 12:06:45 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%i\n", ft_isdigit('a'));
	printf("%i\n", isdigit('a'));
	printf("%i\n", ft_isdigit('A'));
	printf("%i\n", isdigit('A'));
	printf("%i\n", ft_isdigit('1'));
	printf("%i\n", isdigit('1'));
	printf("%i\n", ft_isdigit('0'));
	printf("%i\n", isdigit('0'));
	printf("%i\n", ft_isdigit('2'));
	printf("%i\n", isdigit('2'));
	printf("%i\n", ft_isdigit('$'));
	printf("%i\n", isdigit('$'));
	printf("%i\n", ft_isdigit('J'));
	printf("%i\n", isdigit('J'));
	printf("%i\n", ft_isdigit('ä'));
	printf("%i\n", isdigit('ä'));
	return (0);
}
*/
