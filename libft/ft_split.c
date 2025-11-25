/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:52:40 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/24 15:54:24 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_strdup(char *curr, char const *str, int len, int curr_pos);

static int	word_count(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		while (str[i] != 0 && str[i] == c)
			i++;
		if (str[i] == 0)
			break ;
		count++;
		while (str[i] != 0 && str[i] != c)
			i++;
	}
	return (count);
}

static char	*create_arr(char const *str, char c, int j)
{
	int		len;
	int		curr_pos;
	char	*curr_ptr;

	while (str[j] != 0 && str[j] == c)
		j++;
	if (str[j] == 0)
		return (0);
	curr_ptr = &((char *) str)[j];
	len = 0;
	curr_pos = j;
	while (str[j] != 0 && str[j] != c)
	{
		j++;
		len++;
	}
	curr_ptr = malloc((len + 1) * sizeof(char));
	if (!(curr_ptr))
		return (0);
	ft_strdup(curr_ptr, str, len, curr_pos);
	return (curr_ptr);
}

static void	ft_strdup(char *curr, char const *str, int len, int curr_pos)
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

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		wc;

	i = 0;
	j = 0;
	wc = word_count(s, c);
	arr = malloc((wc + 1) * sizeof(char *));
	if (!(arr))
		return (0);
	while (i < wc)
	{
		arr[i] = create_arr(s, c, j);
		while (s[j] != 0 && s[j] == c)
			j++;
		while (s[j] != 0 && s[j] != c)
			j++;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
/*
#include <stdlib.h>
#include <stdio.h>
int     main(int argc, char *argv[])
{
        int     i = 0;
        char    *str = " This   t is a  hell lot oftffg woordsss !";
        char    splitter = 't';
        char    **arr;
        if (argc != 2)
        {
                printf("%s\n", str);
                printf("sep: %c\n", splitter);
                arr = ft_split(str, splitter);
        }
        else
        {
                printf("%s\n", argv[1]);
                printf("sep: %c\n", splitter);
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
*/
