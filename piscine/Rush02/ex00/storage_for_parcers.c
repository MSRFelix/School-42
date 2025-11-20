/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   storage_for_parcers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatyshe <llatyshe@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 14:42:21 by llatyshe          #+#    #+#             */
/*   Updated: 2025/09/21 14:44:33 by llatyshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	add_char(char *s, char c);
char	*ft_strcat(char *dest, char *src);

void	parse_single(int *i, int position, char **terms, char *input)
{
	if (position % 3 == 0 && input[position + 1] != '1')
	{
		if (input[position] != '0')
		{
			add_char(terms[*i], input[position]);
			(*i)++;
		}
	}
}

void	parse_tens(int *i, int position, char **terms, char *input)
{
	if (position % 3 == 1)
	{
		if (input[position] == '1')
		{
			add_char(terms[*i], input[position]);
			add_char(terms[*i], input[position - 1]);
			(*i)++;
		}
		if (input[position] > '1' && input[position] <= '9')
		{
			add_char(terms[*i], input[position]);
			add_char(terms[*i], '0');
			(*i)++;
		}
	}
}

void	parse_hundreds(int *i, int position, char **terms, char *input)
{
	if (position % 3 == 2)
	{
		if (input[position] != '0')
		{
			terms[*i] = ft_strcat(terms[*i], "100");
			(*i)++;
			if (input[position] != '1')
			{
				add_char(terms[*i], input[position]);
				(*i)++;
			}
		}
	}
}
