/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:50:57 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/24 17:30:20 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			size;
	char			*sol;

	i = 0;
	if (!s || !f)
		return (0);
	size = ft_strlen(s);
	sol = malloc(size + 1);
	if (!(sol))
		return (0);
	while (i < size)
	{
		sol[i] = f(i, s[i]);
		i++;
	}
	sol[i] = 0;
	return (sol);
}
/*

#include <stdio.h>

char to_upper_map(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return c;
}

char add_index_map(unsigned int i, char c)
{
    return (c + i);
}

char star_everything(unsigned int i, char c)
{
    (void)i;
    (void)c;
    return '*';
}

int main(void)
{
    char *s;

    // Test 1 – uppercase conversion
    s = ft_strmapi("hello", to_upper_map);
    printf("Test 1: %s\n", s);
    free(s);

    // Test 2 – add index to ASCII char
    s = ft_strmapi("AAAAA", add_index_map);
    printf("Test 2: %s\n", s);
    free(s);

    // Test 3 – replace everything with '*'
    s = ft_strmapi("abcdef", star_everything);
    printf("Test 3: %s\n", s);
    free(s);

    // Test 4 – empty string
    s = ft_strmapi("", to_upper_map);
    printf("Test 4: '%s'\n", s);
    free(s);

    // Test 5 – NULL input
    s = ft_strmapi(NULL, to_upper_map);
    printf("Test 5: %p (should be NULL)\n", s);

    return (0);
}
*/
