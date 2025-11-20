/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:48:50 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/08 10:29:01 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	position;
	int	counter;
	int	placeholder;
	int	current;

	position = -1;
	while (++position < size - 1)
	{
		current = position;
		counter = position;
		while (++counter < size)
		{
			if (tab[counter] < tab[current])
			{
				current = counter;
			}
		}
		placeholder = tab[position];
		tab[position] = tab[current];
		tab[current] = placeholder;
	}
}

/*
int	main(void)
{
	int	j;
	int	num = 9;
	int	arr[9] = {9 , 6, 4, 7, 2, 3, 1, 5, 8};
	
	j = 0;
	ft_sort_int_tab(arr, num);
	printf("final: ");
	for (j = 0; j < num; j++)
	{
		printf("%i", arr[j]);
	}
	return (0);
}
*/
