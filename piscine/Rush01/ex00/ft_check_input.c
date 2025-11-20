/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 07:40:36 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/14 09:01:19 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_input(char *string);

int	ft_check_input(char *string)
{
	int	i;

	i = 0;
	while (string[i] != 0)
	{
		if (i % 2 == 0)
		{
			if (!(string[i] >= 49 && string[i] <= 52))
				return (0);
		}
		else
		{
			if (string[i] != ' ')
				return (0);
		}
		i++;
	}
	if (i == 31)
		return (1);
	return (0);
}
