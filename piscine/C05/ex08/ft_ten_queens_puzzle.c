/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 08:15:18 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/16 06:55:36 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(int arr[10]);
void	find_path(int column);
int		ft_ten_queens_puzzle(void);
int		pos_check(int x, int y);

int	g_total_count = 0;
int	g_arr[10];

int	ft_ten_queens_puzzle(void)
{
	find_path(0);
	return (g_total_count);
}

void	find_path(int column)
{
	int	row;

	row = 0;
	if (column == 10)
	{
		g_total_count++;
		print_comb(g_arr);
		return ;
	}
	while (row < 10)
	{
		if (pos_check(row, column) == 1)
		{
			g_arr[column] = row;
			find_path(column + 1);
		}
		row++;
	}
}

int	pos_check(int row, int column)
{
	int	i;

	i = 0;
	while (i < column)
	{
		if (g_arr[i] == row 
			|| g_arr[i] - i == row - column 
			|| g_arr[i] + i == row + column)
			return (0);
		i++;
	}
	return (1);
}

void	print_comb(int arr[10])
{
	int		i;
	char	num;

	i = 0;
	while (i < 10)
	{
		num = arr[i] + '0';
		write(1, &num, 1);
		i++;
	}
	write(1, "\n", 1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_ten_queens_puzzle());
	return (0);
}
*/
