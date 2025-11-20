/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 07:47:37 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/12 12:32:29 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	convert(char *str, int negative);

int	check_whitespace(char letter);

int	check_whitespace(char letter)
{
	if (letter == '\t' || letter == '\n')
		return (1);
	else if (letter == '\v' || letter == '\f')
		return (1);
	else if (letter == '\r' || letter == ' ')
		return (1);
	else
		return (0);
}

int	convert(char *str, int negative)
{
	int	sol;
	int	pos;
	int	length;

	sol = 0;
	pos = 1;
	length = 0;
	while (str[length] != 0)
		length++;
	while (--length >= 0)
	{
		sol += (str[length] - 48) * pos;
		pos *= 10;
	}
	if (negative)
		return (-sol);
	return (sol);
}

int	ft_atoi(char *str)
{
	char	buffer[12];
	int		i;
	int		j;
	int		negative;

	i = 0;
	j = 0;
	negative = 0;
	while (check_whitespace(str[i]) && str[i] != 0)
		i++;
	while (str[i] == '-' || (str[i] == '+' && str[i] != 0))
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != 0)
	{
		buffer[j] = str[i];
		i++;
		j++;
	}
	buffer[j] = 0;
	return (convert(buffer, negative % 2));
}

/*
int	main(void)
{
	char	string[] = "++a1257123";

	printf("%i", ft_atoi(string));
	return (0);
}
*/
