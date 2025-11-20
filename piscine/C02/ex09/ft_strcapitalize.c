/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 08:15:56 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/11 07:49:25 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	compare(char *str, int i)
{
	if (!((str[i] > 64 && str[i] < 91)
			|| (str[i] > 97 && str[i] < 123) 
			|| (47 < str[i] && str[i] < 58)))
	{
		return (1);
	}
	return (0);
}

int	letter_or_not(char *str, int i)
{
	if ((str[i] > 64 && str[i] < 91) || (str[i] > 47 && str[i] < 58))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = -1;
	new_word = 1;
	while (str[++i] != '\0')
	{
		if (new_word == 1)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
				new_word = 0;
			}
			else if (letter_or_not(str, i))
				new_word = 0;
			else
				new_word = 1;
		}
		else if (compare(str, i))
			new_word = 1;
		else if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
	}
	return (str);
}

/*
int	main(void)
{
	char	example[] = "hi, HOWWWWEhow are you? 42words forty-two; fifty+and+one";

	ft_strcapitalize(example);
	printf("%s", example);
	return (0);
}
*/
