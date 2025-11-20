/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 08:22:34 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/12 07:42:34 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	specials_check(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
		return (0);
}

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
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
		while (i >= 0)
		{
			write(1, &buffer[i], 1);
			i--;
		}
	}
}

/*
int	main(void)
{
	int	num;

	num = -1230;
	ft_putnbr(num);
	return (0);
}
*/
