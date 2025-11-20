/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 07:29:01 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/19 08:07:13 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}

void	ft_putnbr(int nb)
{
	char	buffer[12];
	int		i;

	i = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else
	{
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

void	ft_show_tab(struct s_stock_str *par);

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
