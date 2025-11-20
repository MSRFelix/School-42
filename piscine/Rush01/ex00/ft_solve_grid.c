/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 07:57:39 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/19 09:10:20 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct s_convert_input	init_input(char *arg);
void					ft_putstring(char *input);
int						ft_check_input(char *string);
int						ft_check_columns(char grid[4][5], char input[2], int i);
int						ft_check_columns_2(char grid[4][5],
							char input[2], int i);
int						ft_solve_grid(char *string);
int						ft_print_grid(char grid[4][5]);
char					*ft_get_comb(char input[2], int i);
char					*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	//dest[counter] = '\0';
	return (dest);
}

struct s_convert_input
{
	char	c1[2];
	char	c2[2];
	char	c3[2];
	char	c4[2];
	char	r1[2];
	char	r2[2];
	char	r3[2];
	char	r4[2];
};

int	ft_checker(char grid[4][5], struct s_convert_input s_input)
{
	if ((ft_check_columns(grid, s_input.c1, 0) == 1
			|| ft_check_columns_2(grid, s_input.c1, 0) == 1)
		&& (ft_check_columns(grid, s_input.c1, 1) == 1
			|| ft_check_columns_2(grid, s_input.c1, 1) == 1)
		&& (ft_check_columns(grid, s_input.c1, 2) == 1
			|| ft_check_columns_2(grid, s_input.c1, 2) == 1)
		&& (ft_check_columns(grid, s_input.c1, 3) == 1
			|| ft_check_columns_2(grid, s_input.c1, 3) == 1))
		return (1);
	return (0);
}

int	g_w = 0;
int	g_x = 0;
int	g_y = 0;
int	g_z = 0;

int	ft_solve_grid(char *string)
{
	char    grid[4][5] = { "6666", "6666", "6666", "6666"};
	struct s_convert_input		s_input;

	s_input = init_input(string);
	while (grid[0][0] != '5' && g_w < 7)
	{
		ft_strncpy(grid[0], ft_get_comb(s_input.r1, g_w), 4);
		ft_strncpy(grid[1], ft_get_comb(s_input.r2, g_x), 4);
		while (grid[1][0] != '5' && g_x < 7)
		{
			ft_strncpy(grid[1], ft_get_comb(s_input.r2, g_x), 4);
			ft_strncpy(grid[2], ft_get_comb(s_input.r3, g_y), 4);
			while (grid[2][0] != '5' && g_y < 7)
			{
				ft_strncpy(grid[2], ft_get_comb(s_input.r3, g_y), 4);
				ft_strncpy(grid[3], ft_get_comb(s_input.r4, g_z), 4);
				while (grid[3][0] != '5' && g_z < 7)
				{
					ft_strncpy(grid[3], ft_get_comb(s_input.r4, g_z), 4);
					if (ft_checker(grid, s_input))
						return (ft_print_grid(grid));
					g_z++;
				}
				g_z = 0;
				g_y++;
			}
			g_y = 0;
			g_x++;
		}
		g_x = 0;
		g_w++;
	}
	return (0);
}

struct s_convert_input	init_input(char *arg)
{
	struct s_convert_input	s_input;

	s_input.c1[0] = arg[0];
	s_input.c1[1] = arg[8];
	s_input.c2[0] = arg[2];
	s_input.c2[1] = arg[10];
	s_input.c3[0] = arg[4];
	s_input.c3[1] = arg[12];
	s_input.c4[0] = arg[6];
	s_input.c4[1] = arg[14];
	s_input.r1[0] = arg[16];
	s_input.r1[1] = arg[24];
	s_input.r2[0] = arg[18];
	s_input.r2[1] = arg[26];
	s_input.r3[0] = arg[20];
	s_input.r3[1] = arg[28];
	s_input.r4[0] = arg[22];
	s_input.r4[1] = arg[30];
	return (s_input);
}
