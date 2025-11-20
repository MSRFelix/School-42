/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 07:31:13 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/21 17:21:58 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset);
void	ft_strdup(char *curr, char *str, int len, int curr_pos);
char	*create_arr(char *str, char *charset, int j);
int		word_count(char *str, char *charset);

int	check_charset(char *charset, char c, int count)
{
	int	i;

	i = 0;
	if (count == 1)
	{
		while (charset[i] != 0)
			i++;
		return (i);
	}
	else
	{
		while (charset[i] != 0)
		{
			if (charset[i] == c)
				return (1);
			i++;
		}
		return (0);
	}
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		while (str[i] != 0 && check_charset(charset, str[i], 0) == 1)
			i++;
		if (str[i] == 0)
			break ;
		count++;
		while (str[i] != 0 && check_charset(charset, str[i], 0) == 0)
			i++;
	}
	return (count);
}

char	*create_arr(char *str, char *charset, int j)
{
	int		len;
	int		curr_pos;
	char	*curr_ptr;

	while (str[j] != 0 && check_charset(charset, str[j], 0) == 1)
		j++;
	if (str[j] == 0)
		return (NULL);
	curr_ptr = &str[j];
	len = 0;
	curr_pos = j;
	while (str[j] != 0 && check_charset(charset, str[j], 0) == 0)
	{
		j++;
		len++;
	}
	curr_ptr = malloc((len + 1) * sizeof(char));
	if (curr_ptr == NULL)
		return (NULL);
	ft_strdup(curr_ptr, str, len, curr_pos);
	return (curr_ptr);
}

void	ft_strdup(char *curr, char *str, int len, int curr_pos)
{
	int	i;

	i = 0;
	while (i < len)
	{
		curr[i] = str[curr_pos + i];
		i++;
	}
	curr[i] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		j;
	int		wc;

	i = 0;
	j = 0;
	wc = word_count(str, charset);
	arr = malloc((wc + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (i < wc)
	{
		arr[i] = create_arr(str, charset, j);
		while (str[j] != 0 && check_charset(charset, str[j], 0) == 1)
			j++;
		j += (check_charset(arr[i], 'c', 1));
		i++;
	}
	arr[i] = 0;
	return (arr);
}

#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	i = 0;
	char	*str = " This    is a  hell lot offfg woordsss !";
	char	*splitter = "tw ";
	char	**arr;
	if (argc != 2)
	{
		printf("%s\n", str);
		printf("sep: %s\n", splitter);
		arr = ft_split(str, splitter);
	}
	else
	{
		printf("%s\n", argv[1]);
		printf("sep: %s\n", splitter);
		arr = ft_split(argv[1], splitter);
	}
	while (arr[i] != 0)
	{
		printf("%s\n", arr[i]);
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}

