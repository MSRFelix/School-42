/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:44:44 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/22 11:17:55 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	error_message(char *msg)
{
	int	i;

	i = 0;
	while (msg[i] != 0)
		i++;
	write(2, msg, i);
	return (0);
}

int	main(int argc, char *argv[])
{
	char	buffer[4096];
	int		buffer_size;
	int		fd;

	if (argc < 2)
		return (error_message("File name missing.\n"));
	else if (argc > 2)
		return (error_message("Too many arguments.\n"));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		return (error_message("Cannot read file.\n"));
	}
	buffer_size = read(fd, buffer, 4096);
	while (buffer_size > 0)
	{
		write(1, buffer, buffer_size);
		buffer_size = read(fd, buffer, 4096);
	}
	close(fd);
	return (0);
}
