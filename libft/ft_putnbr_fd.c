/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:48:22 by flanghof          #+#    #+#             */
/*   Updated: 2025/12/01 14:48:23 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	specials_checks(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (1);
	}
	else if (n == 0)
	{
		write(fd, "0", 1);
		return (1);
	}
	else
		return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[12];
	int		i;

	i = 0;
	if (specials_checks(n, fd))
		return ;
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		while (n > 0)
		{
			buffer[i] = (n % 10 + '0');
			n /= 10;
			i++;
		}
		while (--i >= 0)
			write(fd, &buffer[i], 1);
	}
}
/*
#include <fcntl.h>

int	main(void)
{

	int     number  = 0;
	int     number2  = -2147483648;
	int     number3  = 10000;
	int     number4  = 2147483647;
	int     number5  = -1234;
	int     number6  = 555;

	ft_putnbr_fd(number, 1);
	ft_putnbr_fd(number2, 2);
	ft_putnbr_fd(number3, 2);
	ft_putnbr_fd(number4, 3);
	ft_putnbr_fd(number5, 3);
	ft_putnbr_fd(number6, 2);
	
   	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
        ft_putnbr_fd(number2, fd);
        close(fd);
        return (0);
}
*/
