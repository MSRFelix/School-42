/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 07:28:57 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/19 06:56:06 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_string_len(char *string);

int	ft_string_len(char *string)
{
	int	i;

	i = 0;
	while (string[i] != 0)
		i++;
	return (i);
}

int	length_strs(char **strs, int size)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < size)
	{
		sum += ft_string_len(strs[i]);
		i++;
	}
	return (sum);
}

int	ft_strcpy(char *dest, char *src, int j)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (j);
}

char	*empty_arr(char *arr, int size)
{
	if (size == 0)
		arr = malloc(1);
	return (arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		sum;
	char	*arr;

	i = -1;
	j = 0;
	sum = length_strs(strs, size);
	if (size == 0)
		return (empty_arr(arr, 0));
	arr = malloc((sum + ((size - 1) * ft_string_len(sep)) + 1) * sizeof(char));
	if (arr == Null)
		return (Null);
	i = -1;
	while (++i < size)
	{
		k = 0;
		j = ft_strcpy(arr, strs[i], j);
		if (i != size -1)
			j = ft_strcpy(arr, sep, j);
	}
	arr[j] = '\0';
	return (arr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str1[] = {"Hello", "I", "am", "a", "test", "123Stringx!"};
	char	*separator = "yy  ";
	char	*sol = ft_strjoin(4, str1, separator);
	printf("%s\n", sol);
	free(sol);
	return (0);
}
*/
