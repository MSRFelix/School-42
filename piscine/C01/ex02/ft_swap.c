/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 08:38:46 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/07 09:00:01 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	placeholder;

	placeholder = *a;
	*a = *b;
	*b = placeholder;
}

/*
int	main(void)
{
	int	num_1;
	int	num_2;

	num_1 = 5;
	num_2 = 10;
	printf("num_1: %d\n", num_1);
	printf("num_2: %d\n", num_2);
	ft_swap(&num_1, &num_2);
	printf("num_1: %d\n", num_1);
	printf("num_2: %d\n", num_2);
	return (0);
}
*/
