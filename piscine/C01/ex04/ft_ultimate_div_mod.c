/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 09:00:38 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/07 09:24:14 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num_1;
	int	num_2;
	int	solution;
	int	remainder;

	num_1 = *a;
	num_2 = *b;
	solution = num_1 / num_2;
	remainder = num_1 % num_2;
	*a = solution;
	*b = remainder;
}

/*
int	main(void)
{
	int	first;
	int	second;

	first = 14;
	second = 3;
	printf("%d, %d\n", first, second);
	ft_ultimate_div_mod(&first, &second);
	printf("%d, %d", first, second);
	return (0);
}
*/
