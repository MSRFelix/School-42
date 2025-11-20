/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 09:58:54 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/24 10:01:20 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*buffer;
	int		i;

	i = 1;
	if (argc == 1)
		read(0, buffer, 4096);
	else
	{
		while (i < argc)
		{
			solve_bsq(argv[i]);
			i++;
		}
	}
	return (0);
}
