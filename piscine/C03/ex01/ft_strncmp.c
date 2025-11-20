/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 08:43:47 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/11 07:08:30 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	c_1;
	unsigned char	c_2;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
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
	unsigned char	one[] = "abcdefgh";
	unsigned char	two[] = "abcdegjq";
	unsigned int	num = 5;
	printf("%i", ft_strncmp(one, two, num));
	return (0);
}
*/
