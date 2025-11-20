/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 07:56:21 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/10 17:18:53 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	letter[] = "sdfsdfsdsdfsd";
	int		i;

	i = 0;
	printf("%s", ft_strupcase(letter));
	//while (letter[i] != '\0')
	//{
	//	printf("%c", letter[i]);
	//	i++;
	//}
	return (0);
}
*/
