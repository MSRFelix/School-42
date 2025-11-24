#include <stdlib.h>

static int	ft_intlen(int n)
{
	int	neg;

	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
	if (n < 10)
		return (1 + neg);
	else if (n < 100)
		return (2 + neg);
	else if (n < 1000)
		return (3 + neg);
	else if (n < 10000)
		return (4 + neg);
	else if (n < 100000)
		return (5 + neg);
	else if (n < 1000000)
		return (6 + neg);
	else if (n < 10000000)
		return (7 + neg);
	else if (n < 100000000)
		return (8 + neg);
	else if (n < 1000000000)
		return (9 + neg);
	else
		return (10 + neg);
}

char	*ft_itoa(int n)
{
	char	*sol;
	char	buffer[12];
	int		i;
	int		j;

	i = 0;
	j = 0;
	sol = malloc(ft_intlen(n) + 1);
	if (!(sol))
		return (0);
	else if (n == -2147483648)
		sol = "-2147483648";
	else if (n == 0)
		sol = "0";
	else
	{
		if (n < 0)
		{
			sol[0] = '-';
			n = -n;
			j = 1;
		}
		while (n > 0)
		{
			buffer[i] = (n % 10 + '0');
			n /= 10;
			i++;
		}
		while (--i >= 0)
		{
			sol[j] = buffer[i];
			j++;
		}
		sol[j] = 0;
	}
	return (sol);
}

#include <stdio.h>
#include <string.h>
int	main(int argc, char *argv[])
{
	char	*num = ft_itoa(atoi(argv[1]));
	int	number = 500;
	if (argc == 2)
	{
		printf("%s\n", num);
		free(num);
	}
	else
		printf("%s\n", ft_itoa(number));
	return (0);
}


