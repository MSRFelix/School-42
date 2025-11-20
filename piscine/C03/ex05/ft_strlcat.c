/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:21:20 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/11 07:18:40 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_count_up(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	counter_2;
	unsigned int	counter_3;
	unsigned int	len_src;
	unsigned int	total;

	len_dest = ft_count_up(dest);
	len_src = ft_count_up(src);
	counter_2 = len_dest;
	counter_3 = 0;
	if (len_dest > size)
		total = size + len_src;
	else
		total = len_dest + len_src;
	while (counter_2 < size - 1 && src[counter_3] != '\0')
	{
		dest[counter_2] = src[counter_3];
		counter_3++;
		counter_2++;
	}
	dest[counter_2] = '\0';
	return (total);
}

/*
int	main(void)
{
	int	i = 0;
	char	str[] = "Hello";
	char	str_2[] = " World";

	printf("%d\n", ft_strlcat(str, str_2, 11));
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}
*/
