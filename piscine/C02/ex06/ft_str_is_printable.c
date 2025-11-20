/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:24:49 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/09 15:52:08 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	if (str[count] == '\0' || !str)
		return (1);
	while (str[count] != '\0')
	{
		if (str[count] >= 32 && str[count] <= 127)
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
        char    string[] = {'b','!','~', '\x1f', 'B', 'C', 'D', '\0'};

        printf("%i", ft_str_is_printable(string));
}
*/
