/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:03:02 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/08 16:09:16 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	if (str[count] == '\0' || !str)
		return (1);
	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
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
	char	string[] = {'1', '2', 'I' , '\0'};

	printf("%i", ft_str_is_numeric(string));
}
*/
