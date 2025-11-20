/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 09:54:25 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/22 10:20:07 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_count_up(char *str, int index)
{
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	pos;
	int	len;

	i = 0;
	j = 0;
	pos = 0;
	len = ft_count_up(to_find, 0);
	while (str[i] != '\0')
	{
		pos++;
		while (str[i] == to_find[j] && str[i] != '\0')
		{
			i++;
			j++;
		}
		if (j == len)
			return (&str[i - len]);
		else
			j = 0;
		i = pos;
	}
	return (0);
}


int	main(void)
{
	char	sentence[] = "Hello,something here inside is something to find";
	char	find[] = "some";
	char	*sol = ft_strstr(sentence, find);
			
	printf("%p\n", sol);
	printf("%p\n", sentence);
	printf("%s", sol);
}

