/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 07:49:15 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/24 06:41:33 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *));

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
/*
int	func(char *str)
{
	int i = 0;
	while (str[i] !=  0)
		i++;
	return (i);
}
int	main(void)
{
	char  *arr[2] = {"hello", "goodbye"};
	ft_any(arr, func);
	return (0);
}
*/
