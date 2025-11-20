/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:10:00 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/17 06:59:48 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*storage;

	i = 0;
	j = 0;
	while (src[i] != 0)
		i++;
	storage = malloc((i + 1) * sizeof(char));
	if (storage == NULL)
		return (NULL);
	else
	{
		while (j < i)
		{
			storage[j] = src[j];
			j++;
		}
		storage[j] = 0;
	}
	storage[j] = 0;
	return (storage);
}
/*
int	main(void)
{
	char	*string = "Hello, World";
	char	*ptr = ft_strdup(string);
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}
*/
