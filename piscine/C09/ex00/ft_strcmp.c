/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 13:49:49 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/10 08:42:13 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	c_1;
	unsigned char	c_2;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	c_1 = s1[i];
	c_2 = s2[i];
	if (c_1 > c_2)
		return (1);
	else if (c_2 > c_1)
		return (-1);
	else
		return (0);
}

/*
int	main(void)
{
	unsigned char	one[] = "abc";
	unsigned char	two[] = "abc";

	printf("%i", ft_strcmp(one, two));
	return (0);
}
*/
