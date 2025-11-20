/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:50:31 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/21 19:33:47 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	feed_input(char **arr, char *dict);
char	**input_to_terms(char *input);
int		valid_number(char *str);
int		search_terms_counter(char *input);

void	free_terms(char **terms)
{
	int	i;

	if (!terms)
		return ;
	i = 0;
	while (terms[i] != NULL)
	{
		free(terms[i]);
		i++;
	}
	if (terms != NULL)
		free(terms);
}

int	check_zero(char **string, int argc)
{
	if (argc == 1)
	{
		if (*(string[1]) == '0')
		{
			feed_input(&(string[1]), "numbers.dict");
			return (1);
		}
		return (0);
	}
	else
	{
		if (*(string[2]) == '0')
		{
			feed_input(&(string[2]), string[1]);
			return (1);
		}
		return (0);
	}
}

int	wrong_input(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc != 2 && argc != 3)
		return (wrong_input());
	else if (argc == 2)
	{
		if (valid_number(argv[1]) == 1)
		{
			if (check_zero((argv), 1) == 1)
				return (1);
			feed_input(input_to_terms(argv[1]), "numbers.dict");
		}
	}
	else 
	{
		if (valid_number(argv[2]) == 1)
		{
			if (check_zero((argv), 2) == 1)
				return (1);
			feed_input(input_to_terms(argv[2]), argv[1]);
		}
	}
	return (0);
}
