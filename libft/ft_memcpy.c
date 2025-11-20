/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:34:49 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/19 12:01:27 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*a;
	const unsigned char	*b;

	i = 0;
	a = (unsigned char *) dest;
	b = (const unsigned char *) src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
/*

#include <string.h>
#include <unistd.h>
#include <stdio.h>
int     main(void)
{
        char *ptr  = NULL;
        char    *ptr2 = NULL;
	//ft_memcpy(ptr2, ptr, 3);

        char *ptr3  = NULL ;
        char    *ptr4 = NULL;
        int i = 0;

        memcpy(ptr4, ptr3, 3);
        while (ptr2[i])
        {
                write(1, &ptr2[i], 1);
                i++;
        }
        i = 0;
        write(1, "\n", 1);
        while (ptr4[i])
        {
                write(1, &ptr4[i], 1);
                i++;
        }
	
        return (0);
}
*/
