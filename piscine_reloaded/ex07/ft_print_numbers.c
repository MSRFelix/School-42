/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 06:29:30 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/18 10:08:10 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	num;

	num = 48;
	while (num < 58)
	{
		ft_putchar(num);
		num++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
