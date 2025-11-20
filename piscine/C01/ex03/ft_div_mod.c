/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 08:48:17 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/07 08:59:26 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	division_result;
	int	division_remainder;

	division_result = a / b;
	division_remainder = a % b;
	*div = division_result;
	*mod = division_remainder;
}

/*
int	main(void)
{
	int	num_1;
	int	num_2;
	int	result_1;
	int	result_2;

	num_1 = 23;
	num_2 = 4;
	result_1 = 0;
	result_2 = 0;
	printf("%d, %d, %d, %d\n", num_1, num_2, result_1, result_2);
	ft_div_mod(num_1, num_2, &result_1, &result_2);
	printf("%d, %d, %d, %d\n", num_1, num_2, result_1, result_2);
	return (0);
}
*/
