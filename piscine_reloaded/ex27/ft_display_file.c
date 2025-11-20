/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 09:14:11 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/18 09:35:02 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display(char *str)
{
	char	buffer[4096];
	int		buffer_size;
	int		fd;

	fd = open(str, O_RDONLY);
	if (fd == -1)
		write(2, "Cannot read file.\n", 18);
	else
	{
		buffer_size = read(fd, buffer, 4096);
		while (buffer_size > 0)
		{
			write(1, buffer, buffer_size);
			buffer_size = read(fd, buffer, 4096);
		}
		close(fd);
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		display(argv[1]);
	return (0);
}
