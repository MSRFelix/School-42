/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:18:14 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/08 16:24:11 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	if (str[count] == '\0' || !str)
		return (1);
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
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
int     main(void)
{
        char    string[] = {'A', 'B', 'C', 'D', '\0'};

        printf("%i", ft_str_is_uppercase(string));
}
*/
