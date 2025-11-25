/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:53:43 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/24 15:53:46 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*storage;

	i = 0;
	j = 0;
	while (s[i] != 0)
		i++;
	storage = malloc((i + 1) * sizeof(char));
	if (!(storage))
		return (0);
	else
	{
		while (j < i)
		{
			storage[j] = s[j];
			j++;
		}
		storage[j] = 0;
	}
	storage[j] = 0;
	return (storage);
}
/*
#include <stdio.h>
#include <string.h>

int     main(int argc, char *argv[])
{
        if (argc == 2)
	{	
        	char    *ptr = ft_strdup(argv[1]);
		char	*ptr2 = strdup(argv[1]);
       		printf("%s\n", ptr);
        	printf("%s\n", ptr2);
        	free(ptr);
		free(ptr2);
	}
        return (0);
}
*/
