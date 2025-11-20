/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 08:37:32 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/12 09:51:55 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

void	ft_putnbr(int nb);

int		specials_check(int nb);

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

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
		i++;
	if (1)
		ft_putnbr(nbr);
}
/*
int	main(void)
{
	char	base[] = "0123456789";
	ft_putnbr_base(42, base);
	return (0);
}
*/
