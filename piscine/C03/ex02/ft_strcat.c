/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 08:52:17 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/17 13:38:42 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	counter_2;

	counter = 0;
	counter_2 = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	while (src[counter_2] != '\0')
	{
		dest[counter] = src[counter_2];
		counter++;
		counter_2++;
	}
	dest[counter] = '\0';
	return (dest);
}


int	main(void)
{
	int	i = 0;
	char	str[] = "Hello";
	char	str_2[] = " World";

	ft_strcat(str, str_2);
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}

