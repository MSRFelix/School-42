/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lecavall <lecavall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 10:46:25 by lecavall          #+#    #+#             */
/*   Updated: 2025/09/07 14:32:53 by lecavall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	body(int x);

void	rush(int x, int y)
{
	int	line;
	int	pos;

	line = 1;
	while (line <= y)
	{
		if (line == y || line == 1)
		{
			pos = 1;
			while (pos <= x)
			{
				if (pos == 1 || pos == x)
					ft_putchar('o');
				else
					ft_putchar('-');
				pos++;
			}
		}
		else
		{
			body(x);
		}
		line++;
		ft_putchar('\n');
	}
}

void	body(int x)
{
	int	pos;

	pos = 1;
	while (pos <= x)
	{
		if (pos == 1 || pos == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		pos++;
	}
}
