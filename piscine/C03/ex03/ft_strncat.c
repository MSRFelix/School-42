/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 09:14:07 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/10 09:53:13 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter;
	unsigned int	counter_2;

	counter = 0;
	counter_2 = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	while (src[counter_2] != '\0' && counter_2 < nb)
	{
		dest[counter] = src[counter_2];
		counter++;
		counter_2++;
	}
	dest[counter] = '\0';
	return (dest);
}

/*
int	main(void)
{
	int	i = 0;
	char	str[] = "Hello";
	char	str_2[] = " World";
	unsigned int num = 4;

	ft_strncat(str, str_2, num);
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}
*/
