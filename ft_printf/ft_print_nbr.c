#include "ft_printf.h"

static int	ft_print_long(long nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
		count += ft_print_long(nb / 10);
	count += ft_print_char((nb % 10) + '0');
	return (count);
}

int	ft_print_nbr(int n)
{
	long	nb;
	int		count;

	nb = (long)n;
	count = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		count++;
	}
	count += ft_print_long(nb);
	return (count);
}
