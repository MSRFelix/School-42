/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 08:54:15 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/26 07:28:36 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>
#include <stdlib.h>

int	ft_strlen(unsigned char *str);

char	*allocate(int fd, char *file)
{
	int		buffer_size;
	unsigned char	*buffer;

	buffer_size = 500;
	buffer = malloc(buffer_size);
	while (read(fd, buffer, buffer_size) >= buffer_size)
	{
		buffer_size += 500;
		free(buffer);
		buffer = malloc(buffer_size);
		close(fd);
		fd = open(file, O_RDONLY);
	}
	return (buffer);
}

char	*alloc(int fd)
{
	int			buffer_size;
	unsigned char	*buffer;

	buffer_size = 500;
	buffer = malloc(buffer_size);
	while (read(fd, buffer, buffer_size) >= buffer_size)
	{
		buffer_size += 500;
		free(buffer);
		buffer = malloc(buffer_size);
	}
	return (buffer);
}

void	ft_write_stdin(int size)
{
	int		len;
	int		max_len;
	unsigned char	*buffer;

	len = 0;
	buffer = alloc(0);
	while (buffer[len] != 0)
		len++;
	max_len = len;
	len -= size;
	if (len < 0)
		len = 0;
	if (max_len < size)
		write(1, &buffer[len], max_len);
	else
		write(1, &buffer[len], size);
	free(buffer);
}

void	ft_write_help(char *argv1)
{
	write(2, argv1, ft_strlen(argv1));
	write(2, ": option requires an argument -- \'c\'\n", 37);
	write(2, "Try \'tail --help\' for more information.\n", 41);
}
