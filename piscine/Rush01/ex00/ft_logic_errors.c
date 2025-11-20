/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 11:34:04 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/16 12:20:52 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_logic_errors_4(char *input);
int	ft_logic_errors_3(char *input);

int	ft_logic_errors_4(char *input)
{
	int	i;

	i = 0;
	while (i < 32)
	{
		if (i % 2 == 1)
		{
			i++;
			continue ;
		}
		else if (input[i] == '4')
		{
			if (i < 7 || (i < 23 && i > 15))
			{
				if (input[i + 8] != '1')
					return (1);
			}
			else if ((i > 7 && i < 15) || i > 23)
			{
				if (input[i - 8] != '1')
					return (1);
			}
		}
		i++;
	}
	return (0);
}

int	ft_logic_errors_3(char *input)
{
	int	i;

	i = 0;
	while (i < 32)
	{
		if (i % 2 == 1)
		{
			i++;
			continue ;
		}
		if (input[i] == '3')
		{
			if (i < 7 || (i < 23 && i > 15))
			{
				if (input[i + 8] != '1' && input[i + 8] != '2')
					return (1);
			}
			else if ((i > 7 && i < 15) || i > 23)
			{
				if (input[i - 8] != '1' && input[i - 8] != '2')
					return (1);
			}
		}
		i++;
	}
	return (0);
}
