/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:59:50 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/26 07:30:51 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>
#include <stdlib.h>

void	print_name(char *str, int i);
void	ft_write_tail(int fd, int argv2, char *file);
int		win_counter(char **argv, int argc, int i);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	print_error_msg(char *argv1, char *file)
{
	write(2, argv1, ft_strlen(argv1));
	write(2, ": invalid number of bytes: \xE2\x80\x98", 30);
	write(2, basename(file), ft_strlen(basename(file)));
	write(2, "\xE2\x80\x99\n", 4);
	return (0);
}

void	file_not_found(char *argv1, char *file)
{
	write(2, argv1, ft_strlen(argv1));
	write(2, ": cannot open \'", 15);
	write(2, basename(file), ft_strlen(basename(file)));
	write(2, "\' for reading: ", 15);
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
}

int	convert(unsigned char *str)
{
	int	sol;
	int	pos;
	int	length;

	sol = 0;
	pos = 1;
	length = 0;
	while (str[length] != 0)
		length++;
	while (--length >= 0)
	{
		sol += (str[length] - 48) * pos;
		pos *= 10;
	}
	return (sol);
}

int	loop_files(char **argv, int input, int i, int argc)
{
	int	fd;
	int	wins;
	int	counter;

	wins = win_counter(argv, argc, i);
	counter = 0;
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			file_not_found(argv[0], argv[i]);
		else
		{
			if (wins > 1 || argc > 4)
				print_name(argv[i], counter);
			counter++;
			ft_write_tail(fd, input, argv[i]);
			close(fd);
		}
	}
	return (0);
}
