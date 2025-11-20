/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 07:01:44 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/26 07:28:50 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>
#include <stdlib.h>

int	win_counter(char **argv, int argc, int i)
{
	int	fd;
	int	wins;
	int	j;

	wins = 0;
	j = i;
	while (++j < argc)
	{
		fd = open(argv[j], O_RDONLY);
		if (fd != -1)
		
			wins += 1;
			close(fd);
		}
	}
	return (wins);
}
