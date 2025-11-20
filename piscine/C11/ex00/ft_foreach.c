/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 18:12:12 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/23 07:37:12 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>
void	printer(int num)
{
	printf("%i\n", num);
}
int	main(void)
{
	int arr[5] = {1, 2, 3, 5, 4};
	ft_foreach(arr, 5, printer);
	return (0);
}
*/
