/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 07:52:52 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/24 11:42:29 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *));

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

#include <stdio.h>
int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	if (i > 4)
		return (1);
	return (0);
}

int	main(void)
{
	char	*arr[] = {"lo", "here and there", "is", "a", "array"};
	printf("%i\n", ft_count_if(arr, 5, len));
	return (0);
}

