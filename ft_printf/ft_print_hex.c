
#include "ft_printf.h"

int	ft_print_hex(uintptr_t n, char format)
{
	char	*base;
	int		count;

	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_print_hex(n / 16, format);
	count += ft_print_char(base[n % 16]);
	return (count);
}
