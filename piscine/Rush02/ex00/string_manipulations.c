/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_manipulations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatyshe <llatyshe@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:25:55 by llatyshe          #+#    #+#             */
/*   Updated: 2025/09/21 17:13:20 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = 0;
	return (dest);
}

void	add_char(char *s, char c)
{
	while (*s++)
		continue ;
	*(s - 1) = c;
	*s = '\0';
}

void	reverse(char *str)
{
	char	temp;
	int		left;
	int		right;

	left = 0;
	right = ft_strlen(str) - 1;
	while (left < right)
	{
		temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}
}

int	ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (str[i] != 0 && to_find != 0 && to_find[i] == str[i])
		i++;
	if (to_find[i] == 0 && (str[i] == 32 || str[i] == 58))
		return (1);
	return (0);
}
