/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:42:12 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/12 10:13:44 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest-12);
}

int	main(int argc, char *argv[])
{
	char string[] = "Hello World";
	char dest[12];
	printf("%i\n", argc); 
	if (argc > 1)
		printf("%s\n", argv[1]);
	ft_strcpy(dest, string);
	printf("%s", dest);
	for (int i = 0; i < 12; i++)
	{
		printf("%p\n", &dest[i]);
	}
	return (0);
}
