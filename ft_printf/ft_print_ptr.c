
#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	count += ft_print_hex((uintptr_t)ptr, 'x');
	return (count);
}
