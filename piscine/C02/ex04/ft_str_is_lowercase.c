/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:10:02 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/08 16:17:28 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	if (str[count] == '\0' || !str)
		return (1);
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			count++;
			continue ;
		}
		else
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/*
int	main(void)
{
	char	string[] = {'a', 'B', 'c', 'd', '\0'};

	printf("%i", ft_str_is_lowercase(string));
}
*/
