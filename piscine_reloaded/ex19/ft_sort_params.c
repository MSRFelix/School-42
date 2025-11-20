/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 07:54:45 by flanghof          #+#    #+#             */
/*   Updated: 2025/11/18 10:07:02 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	c1 = s1[i];
	c2 = s2[i];
	return (c1 - c2);
}

void	ft_swap(char **a, char **b)
{
	char	*placeholder;

	placeholder = *a;
	*a = *b;
	*b = placeholder;
}

void	ft_print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;
	int	i;

	a = 0;
	while (a < argc - 1)
	{
		b = a + 1;
		while (b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
				ft_swap(&argv[a], &argv[b]);
			b++;
		}
		a++;
	}
	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
			ft_print_str(argv[i]);
	}
	return (0);
}
