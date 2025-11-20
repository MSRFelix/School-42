/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:59:08 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/23 15:36:03 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	specials_check(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648\n", 12);
		return (1);
	}
	else if (nb == 0)
	{
		write(1, "0\n", 2);
		return (1);
	}
	return (0);
}

void	print(int nb)
{
	char	buffer[12];
	int		i;

	i = 0;
	if (specials_check(nb))
		return ;
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		while (nb > 0)
		{
			buffer[i] = (nb % 10 + '0');
			nb /= 10;
			i++;
		}
		while (--i >= 0)
			write(1, &buffer[i], 1);
		write(1, "\n", 1);
	}
}

int	add(int num1, int num2)
{
	return (num1 + num2);
}

int	div(int num1, int num2)
{
	return (num1 / num2);
}

int	mod(int num1, int num2)
{
	return (num1 % num2);
}
