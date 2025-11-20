/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 13:04:47 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/21 19:10:09 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int		read_dict(char *input, int last_call, char *dict, int new_line);
void	ft_putstring(char *str);
char	*fill_buffer(char *dict);
int		ft_strstr(char *str, char *to_find);
int		ft_filter_output(char *buffer, int last_call);
int		filter(char *buffer, int i, int last_call);
int		parse_to_end(char *buffer, int i);

int	ft_filter_output(char *buffer, int last_call)
{
	int	i;
	int	j;

	i = 0;
	while (buffer[i] != 0 && buffer[i] != '\n' && buffer[i] != ':')
		i++;
	if (buffer[i] == 0 || buffer[i] == '\n')
		return (0);
	else
	{
		while (buffer[++i] == ' ')
			;
		j = i;
		while (buffer[i] != '\n' && buffer[i] != 0)
			i++;
		if (buffer[i] == 0)
			return (0);
		i--;
		while (buffer[i] == ' ')
			i--;
		write(1, &buffer[j], (i - j + 1));
		if (last_call != 1)
			write(1, " ", 1);
		return (1);
	}
}

int	dict_error(char *buffer)
{
	write(1, "Dict Error\n", 11);
	free(buffer);
	return (0);
}

char	*fill_buffer(char *dict)
{
	int		fd;
	int		buffer_size;
	char	*buffer;

	buffer_size = 500;
	fd = open(dict, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	buffer = malloc(buffer_size);
	while (read(fd, buffer, buffer_size) >= buffer_size)
	{
		buffer_size += 500;
		free(buffer);
		buffer = malloc(buffer_size);
		close(fd);
		fd = open(dict, O_RDONLY);
	}
	close(fd);
	buffer[buffer_size - 1] = 0;
	return (buffer);
}

void	change_some_values(int *i, int *new_line, char *buffer)
{
	*i = parse_to_end(buffer, *i);
	*new_line = 1;
}

int	read_dict(char *input, int last_call, char *dict, int new_line)
{
	char	*buffer;
	int		i;

	buffer = fill_buffer(dict);
	if (buffer == NULL)
		return (0);
	i = -1;
	while (buffer[++i] != 0)
	{
		if (new_line == 1)
		{
			if (ft_strstr(&(buffer[i]), input) == 1)
			{
				new_line = filter(buffer, i, last_call);
				if (new_line == 1)
					return (new_line);
			}
			else
				new_line = 0;
		}
		else
			change_some_values(&i, &new_line, buffer);
	}
	return (dict_error(buffer));
}
