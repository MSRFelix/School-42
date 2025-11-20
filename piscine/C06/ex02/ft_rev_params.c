/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:09:27 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/15 14:15:57 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = argc - 1;
	if (argc == 1)
		return (0);
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != 0)
			j++;
		write(1, argv[i], j);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
