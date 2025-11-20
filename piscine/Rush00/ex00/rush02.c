/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 08:05:00 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/07 15:57:48 by mmeinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);
void	ft_conditions(int param1, int param2, int x, int y);

void	ft_conditions(int param1, int param2, int x, int y)
{
	if ((param1 == 1 && param2 == 1) || (param1 == 1 && param2 == x))
		ft_putchar('A');
	else if ((param1 == y && param2 == x) || (param1 == y && param2 == 1))
		ft_putchar('C');
	else if (param1 == 1 || param2 == x || param1 == y || param2 == 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int		line;
	int		column;
	char	*pline;

	line = 0;
	pline = "\n";
	while (++line <= y)
	{
		column = 0;
		while (++column <= x)
		{
			ft_conditions(line, column, x, y);
		}
		if (x > 0 && y > 0)
			ft_putchar(*pline);
	}
}
