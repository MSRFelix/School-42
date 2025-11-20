/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:31:22 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/23 15:42:01 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		convert(char *str, int negative);
void	print(int result);
int		add(int num1, int num2);
int		sub(int num1, int num2);
int		multi(int num1, int num2);
int		div(int num1, int num2);
int		mod(int num1, int num2);
int		calc_result(char *argv, int num1, int num2);
int		calc(int num1, int num2, int (*f)(int, int));

int	sub(int num1, int num2)
{
	return (num1 - num2);
}

int	multi(int num1, int num2)
{
	return (num1 * num2);
}

int	calc_result(char *argv, int num1, int num2)
{
	int	result;

	if (argv[0] == '+')
		result = calc(num1, num2, add);
	else if (argv[0] == '-')
		result = calc(num1, num2, sub);
	else if (argv[0] == 42)
		result = calc(num1, num2, multi);
	else if (argv[0] == '/')
		result = calc(num1, num2, div);
	else if (argv[0] == '%')
		result = calc(num1, num2, mod);
	else
		return (0);
	return (result);
}
