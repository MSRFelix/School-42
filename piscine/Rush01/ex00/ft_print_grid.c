/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 08:45:46 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/18 08:21:51 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstring(char *input);
int		ft_check_input(char *string);
int		ft_solve_grid(char *string);
int		ft_print_grid(char grid[4][5]);

int	ft_print_grid(char grid[4][5])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &grid[i][j], 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char grid[4][5] = { "1234", "2345", "3456", "4567"};
	ft_print_grid(grid);
	return 0;
}
*/
