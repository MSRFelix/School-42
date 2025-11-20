/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:45:40 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/07 16:47:59 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	placeholder;
	int	left;
	int	right;

	placeholder = 0;
	left = 0;
	right = size - 1;
	while (left < right)
	{
		placeholder = tab[left];
		tab[left] = tab[right];
		tab[right] = placeholder;
		left++;
		right--;
	}
}

/*
int     main(void)
{
        int     j;
        int     num;
        int     arr[6] = {1, 2, 3, 4, 5, 6};
        
        num = 6;
        j = 0;
        ft_rev_int_tab(arr, num);

        for (j = 0; j < num; j++)
        {
                printf("%i", arr[j]);
        }
        return (0);
}
*/
