/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 08:29:47 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/23 15:54:29 by flanghof         ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	char	buffer[12];
	int		i;
	int		j;
	int		negative;

	i = 0;
	j = 0;
	negative = 0;
	while (str[i] == '-' || (str[i] == '+' && str[i] != 0))
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	if (str[i] > '9' || str[i] < '0')
		return (0);
	while (str[i] >= '0' && str[i] <= '9' && str[i] != 0)
	{
		buffer[j] = str[i];
		i++;
		j++;
	}
	buffer[j] = 0;
	return (convert(buffer, negative % 2));
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

int	check_operator(char *str)
{
	if (str[1] != 0)
		return (0);
	else if (!(str[0] == '+' || str[0] == '-' || str[0] == '/' 
			|| str[0] == 42 || str[0] == '%' ))
		return (0);
	return (1);
}

int	calc(int num1, int num2, int (*f)(int, int))
{
	return (f(num1, num2));
}

int	main(int argc, char *argv[])
{
	int	i;
	int	num1;
	int	num2;
	int	result;

	i = 0;
	if (argc != 4)
		return (0);
	if (check_operator(argv[2]) == 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	if (num2 == 0 && *(argv[2]) == '/')
		write(2, "Stop : division by zero\n", 24);
	else if (num2 == 0 && *(argv[2]) == '%')
		write(2, "Stop : modulo by zero\n", 22);
	else
	{
		result = calc_result(argv[2], num1, num2);
		print(result);
	}
	return (0);
}
