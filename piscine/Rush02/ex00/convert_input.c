/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatyshe <llatyshe@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 20:01:08 by llatyshe          #+#    #+#             */
/*   Updated: 2025/09/21 20:06:23 by llatyshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
void	add_char(char *s, char c);
void	reverse(char *str);
int		search_terms_counter(char *input);
void	parser(char *input, char **terms);

char	**allocate_terms(char *input)
{
	char	**terms;
	int		i;
	int		j;
	int		num;

	num = search_terms_counter(input);
	terms = malloc((sizeof(char *)) * num + sizeof(char *));
	i = 0;
	while (i < num)
	{
		terms[i] = malloc(39);
		j = 0;
		while (j <= 38)
		{
			terms[i][j] = '\0';
			j++;
		}
		i++;
	}
	terms[i] = NULL;
	return (terms);
}

void	reverse_terms_array(char *input, char **terms)
{
	char	*temp;
	int		num;
	int		left;
	int		right;

	left = 0;
	num = search_terms_counter(input);
	right = num - 1;
	while (left < right)
	{
		temp = terms[left];
		terms[left] = terms[right];
		terms[right] = temp;
		left++;
		right--;
	}
}

char	**input_to_terms(char *input)
{
	char	**terms;

	reverse(input);
	terms = allocate_terms(input);
	parser(input, terms);
	reverse_terms_array(input, terms);
	return (terms);
}
/*
int	main(int argc, char *argv[])
{
	char	*input;
	int		i;
	char	**terms;

	printf("Testing input to search terms, ");
	printf("default dictionary. \n");
	if (argc == 2)
	{
		input = argv[1];
		printf("Your input: %s\n", input);
		terms = input_to_terms(input);
		i = 0;
		while (terms[i] != 0)
		{
			printf("%s\n", terms[i]);
			i++;
		}
		free(terms);
	}
	else
		printf("Input error.");
	return (0);
}*/
