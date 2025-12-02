/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:47:45 by flanghof          #+#    #+#             */
/*   Updated: 2025/12/01 14:47:47 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &(s[i]));
		i++;
	}
}
/*
#include <stdio.h>
#include "libft.h"

void to_upper_map(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'a' && *c <= 'z')
	    *c -= 32;
}

void add_index_map(unsigned int i, char *c)
{
    *c += i;
}

void star_everything(unsigned int i, char *c)
{
    (void)i;
    *c = '*';
}

int main(void)
{

    // Test 1 – uppercase conversion
    char s[] = "hello";
    ft_striteri(s, to_upper_map);
    printf("Test 1: %s\n", s);

    // Test 2 – add index to ASCII char
    char t[] = "AAAA";
    ft_striteri(t, add_index_map);
    printf("Test 2: %s\n", t);

    // Test 3 – replace everything with '*'
    char u[] = "abcde";
    ft_striteri(u, star_everything);
    printf("Test 3: %s\n", u);

    // Test 4 – empty string
    char p[] = "";
    ft_striteri(p, to_upper_map);
    printf("Test 4: '%s'\n", p);

    // Test 5 – NULL input
    char *x = NULL;
    ft_striteri(x, to_upper_map);
    printf("Test 5: %p (should be NULL)\n", x);

    return (0);
}
*/
