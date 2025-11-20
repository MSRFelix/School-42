/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 12:04:34 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/19 08:23:21 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	if (str[count] == '\0' || !str)
		return (1);
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z' && cond == 1

		{
			count++;
			continue ;
		}
		else if (str[count] >= 'A' && str[count] <= 'Z')
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
	char	string[] = {'\0'};

	printf("%i", ft_str_is_alpha(string));
}
*/
