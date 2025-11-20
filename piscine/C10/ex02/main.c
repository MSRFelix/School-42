/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:10:44 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/26 07:36:03 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>
#include <stdlib.h>

int		loop_files(char **argv, int input, int i, int argc);
int		convert(unsigned char *str);
int		ft_strlen(char *str);
int		print_error_msg(char *argv1, char *file);
void	file_not_found(char *argv1, char *file);
char	*allocate(int fd, char *file);
void	ft_write_stdin(int size);
void	ft_write_help(char *argv1);

void	ft_write_tail(int fd, int argv2, char *file)
{
	unsigned char	*buffer;
	int				len;
	int			max_len;

	len = 0;
	buffer = (char *)allocate(fd, file);
	if (!buffer)
		return ;
	while (buffer[len] != 0)
		len++;
	max_len = len;
	len -= argv2;
	if (len < 0)
		len = 0;
	if (max_len < argv2)
		write(1, &buffer[len], max_len);
	else
		write(1, &buffer[len], argv2);
	free(buffer);
}

void	ft_write(int fd)
{
	unsigned char	buffer[29999];
	unsigned int		buffer_size;

	buffer_size = read(fd, buffer, 29999);
	while (buffer_size > 0)
	{
		buffer_size = read(fd, buffer, 29999);
	}
}

int	ft_atoi(char *str)
{
	unsigned char	buffer[12];
	int		i;
	int		j;
	int		negative;

	i = 0;
	j = 0;
	negative = 0;
	if (str[0] == '-')
		i++;
	if (str[i] > '9' || str[i] < '0')
		return (-1);
	while (str[i] >= '0' && str[i] <= '9' && str[i] != 0)
	{
		buffer[j] = str[i];
		i++;
		j++;
	}
	if (str[i] != 0 && (str[i] > '9' || str[i] < '0'))
		return (-1);
	buffer[j] = 0;
	return (convert(buffer));
}

void	print_name(char *str, int i)
{
	if (i == 0)
		write(1, "==> ", 4);
	else
		write(1, "\n==> ", 5);
	write(1, str, ft_strlen(str));
	write(1, " <==\n", 5);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	input;

	i = 2;
	if (argc < 2)
		ft_write(0);
	else if (argc == 2)
		ft_write_help(argv[0]);
	else
	{
		input = ft_atoi(argv[2]);
		if (input == -1)
			return (print_error_msg(argv[0], argv[2]));
		else if (input == 0)
			return (0);
		else if (argc == 3)
		{
			ft_write_stdin(input);
			return (0);
		}
		else if (argc == 4 && *argv[3] == '-')
			ft_write(0);
		loop_files(argv, input, 2, argc);
	}
	return (0);
}
