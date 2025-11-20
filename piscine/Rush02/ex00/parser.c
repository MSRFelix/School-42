/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatyshe <llatyshe@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 12:13:11 by llatyshe          #+#    #+#             */
/*   Updated: 2025/09/21 18:19:14 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	add_char(char *s, char c);
char	*ft_strcat(char *dest, char *src);
void	parse_single(int *i, int position, char **terms, char *input);
void	parse_tens(int *i, int position, char **terms, char *input);
void	parse_hundreds(int *i, int position, char **terms, char *input);

void	call_parsers(int *i, int position, char **terms, char *input)
{
	parse_single(i, position, terms, input);
	parse_tens(i, position, terms, input);
	parse_hundreds(i, position, terms, input);
}

void	init_for_parser(int *pos, int *magn, int *i)
{
	*pos = 0;
	*magn = 1;
	*i = 0;
}

void	parser(char *input, char **terms)
{
	int	position;
	int	magn_counter;
	int	i;
	int	j;

	init_for_parser(&position, &magn_counter, &i);
	while (input[position] != 0)
	{
		if (magn_counter > 3 
			&& magn_counter % 3 == 1 && (input[position] != '0'
				|| input[position + 1] != '0' || input[position + 2] != '0'))
		{
			add_char(terms[i], '1');
			j = 0;
			while (j < magn_counter / 3)
			{
				terms[i] = ft_strcat(terms[i], "000");
				(j)++;
			}
			(i)++;
		}
		call_parsers(&i, position, terms, input);
		magn_counter++;
		position++;
	}
}
