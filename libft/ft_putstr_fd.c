/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:48:12 by flanghof          #+#    #+#             */
/*   Updated: 2025/12/01 14:48:14 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
}
/*
#include <fcntl.h>

int	main(void)
{
	char *s1 = "Hello, my friend";
	char *s2 = "Goodbye, see you";
	char *s3 = "123456";

	ft_putstr_fd(s1, 1);
	ft_putstr_fd(s2, 2);
	ft_putstr_fd(s3, 3);
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putstr_fd(s3, fd);
	close(fd);
	return (0);
}
*/
