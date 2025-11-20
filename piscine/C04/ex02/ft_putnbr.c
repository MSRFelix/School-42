/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 08:22:34 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/19 08:51:51 by flanghof         ###   ########.fr       */
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
		while (--i >= 0)
			write(1, &buffer[i], 1);
	}
}


int	main(void)
{
	int	num;

	num = 0;
	//ft_putnbr(555);
//	ft_putnbr(1234);
///	ft_putnbr(-65);
//	ft_putnbr(1234567);
	ft_putnbr(-87654321555);
	return (0);
}

