/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 07:33:40 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/18 08:25:32 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstring(char *input);
int		ft_check_input(char *string);
int		ft_solve_grid(char *string);
int		ft_logic_errors_3(char *input);
int		ft_logic_errors_4(char *input);
int             ft_print_grid(char grid[4][5]);

int	main(int argc, char *argv[])
{
	char	*wrong_input;
	int		i;
	int		j;

	i = 0;
	j = 0;	
	wrong_input = "Error\n";
	if (argc != 2)
		ft_putstring(wrong_input);
	else
	{
		if (!(ft_check_input(argv[1])))
			ft_putstring(wrong_input);
		else if (ft_logic_errors_3(argv[1]) == 1 
			|| ft_logic_errors_4(argv[1]) == 1)
			ft_putstring(wrong_input);
		else
		{
			if (!(ft_solve_grid(argv[1])))
				ft_putstring(wrong_input);
		}
	}
	return (0);
}
