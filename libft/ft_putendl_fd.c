/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:48:47 by flanghof          #+#    #+#             */
/*   Updated: 2025/12/01 14:48:48 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>

int     main(void)
{
        char *s1 = "Hello, my friend";
        char *s2 = "Goodbye, see you";
        char *s3 = "123456";

        ft_putendl_fd(s1, 1);
        ft_putendl_fd(s2, 2);
        ft_putendl_fd(s3, 3);
        int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
        ft_putendl_fd(s3, fd);
        close(fd);
        return (0);
}
*/
