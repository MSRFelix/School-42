/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible_combinations_scaled_down.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksulliva <ksulliva@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:47:28 by ksulliva          #+#    #+#             */
/*   Updated: 2025/09/19 09:11:23 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	g_combo4_1[] = {'1', '2', '3', '4'};

char	g_combo3_1[3][4] = {{'1', '3', '2', '4'},
{'2', '1', '3', '4'},
{'2', '3', '1', '4'}};

char	g_combo3_2[3][4] = {{'1', '2', '4', '3'},
{'1', '3', '4', '2'},
{'2', '3', '4', '1'}};

char	g_combo2_1[2][4] = {{'3', '1', '2', '4'},
{'3', '2', '1', '4'}};

char	g_combo2_2[6][4] = {{'1', '4', '2', '3'},
{'2', '1', '4', '3'},
{'2', '4', '1', '3'},
{'3', '1', '4', '2'},
{'3', '2', '4', '1'},
{'3', '4', '1', '2'}};

char	g_combo2_3[3][4] = {{'1', '4', '3', '2'},
{'2', '4', '3', '1'},
{'3', '4', '2', '1'}};

char	g_combo1_2[] = {'4', '1', '2', '3'};

char	g_combo1_3[4][4] = {{'4', '1', '3', '2'},
{'4', '2', '1', '3'},
{'4', '2', '3', '1'},
{'4', '3', '1', '2'}};

char	g_combo1_4[] = {'4', '3', '2', '1'};

char	g_error[] = {'5', '5', '5', '5'};

char	*ft_get_comb(char input[2], int i)
{
	if (input[0] == '4')
		return (g_combo4_1);
	else if (input[0] == '3' && input[1] == '1' && i < 3)
		return (g_combo3_1[i]);
	else if (input[0] == '3' && input[1] == '2' && i < 3)
		return (g_combo3_2[i]);
	else if (input[0] == '2' && input[1] == '1' && i < 2)
		return (g_combo2_1[i]);
	else if (input[0] == '2' && input[1] == '2' && i < 6)
		return (g_combo2_2[i]);
	else if (input[0] == '2' && input[1] == '3' && i < 3)
		return (g_combo2_3[i]);
	else if (input[0] == '1' && input[1] == '2' && i < 1)
		return (g_combo1_2);
	else if (input[0] == '1' && input[1] == '3' && i < 4)
		return (g_combo1_3[i]);
	else if (input[0] == '1' && input[1] == '4' && i < 1)
		return (g_combo1_4);
	else
		return (g_error);
}

char	*extract_column(char grid[4][5], int i)
{
	static char	column[4];

	*column = grid[0][i];
	*(column + 1) = grid[1][i];
	*(column + 1) = grid[2][i];
	*(column + 1) = grid[3][i];
	return (column);
}

int	column_loop_for_two_or_more(int comb, char *some, char *col)
{
	int	j;
	int	c;

	j = 0;
	c = 0;
	while (j < comb)
	{
		while (*some == col[c])
		{
			c++;
			some++;
		}
		if (c == 4)
			return (1);
		else
		{
			c = 0;
			j++;
		}
	}
	return (0);
}

int	ft_check_columns(char grid[4][5], char input[2], int i)
{
	char	*column;
	int		j;

	j = i;
	column = extract_column(grid, i);
	while (i < 4)
	{
		printf("%c", column[i]);
		i++;
		printf("\n");
	}
	if (input[0] == '4' && input[1] == '1' && j < 1)
	{
		return (column_loop_for_two_or_more(1, g_combo4_1, column));
	}
	else if (input[0] == '3' && input[1] == '1' && j < 3)
	{
		return (column_loop_for_two_or_more(3, &g_combo3_1[0][0], column)); 
	}
	else if (input[0] == '3' && input[1] == '2' && j < 3)
	{
		return (column_loop_for_two_or_more(3, &g_combo3_2[0][0], column));
	}
	else if (input[0] == '2' && input[1] == '1' && j < 2)
	{
		return (column_loop_for_two_or_more(2, &g_combo2_1[0][0], column));
	}
	return (0);
}

int	ft_check_columns_2(char grid[4][5], char input[2], int i)
{
	char	*column;
	int		j;

	column = extract_column(grid, i);
	j = 0;
	if (input[0] == '2' && input[1] == '2' && j < 6)
		return (column_loop_for_two_or_more(6, &g_combo2_2[0][0], column));
	else if (input[0] == '2' && input[1] == '3' && j < 3)
		return (column_loop_for_two_or_more(3, &g_combo2_3[0][0], column));
	else if (input[0] == '1' && input[1] == '2' && j < 1)
		return (column_loop_for_two_or_more(1, g_combo1_2, column));
	else if (input[0] == '1' && input[1] == '3' && j < 4)
		return (column_loop_for_two_or_more(4, &g_combo1_3[0][0], column));
	else if (input[0] == '1' && input[1] == '4' && j < 1)
		return (column_loop_for_two_or_more(1, g_combo1_4, column));
	return (0);
}
/*
int	main()
{
	char	test[2] = "31";
	int	i = 2;
	int	j =0;
	char *grid[4][5] = { "1234" , "2341", "3214" , "2431"};
	char *sol = ft_check_columns(grid, test, i);
	while (j < 4)
	{	
		printf("%c", *sol);
		j++;
		sol++;
	}
	return 0;
}
*/
