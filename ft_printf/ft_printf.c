#include "ft_printf.h"

static int	ft_check_var(char c, va_list *args)
{
	if (c == 'c')
		return (ft_print_char(va_arg(*args, int)));
	if (c == 's')
		return (ft_print_str(va_arg(*args, char *)));
	if (c == 'd' || c == 'i')
		return (ft_print_nbr(va_arg(*args, int)));
	if (c == 'u')
		return (ft_print_unsigned(va_arg(*args, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_print_hex(va_arg(*args, unsigned int), c));
	if (c == 'p')
		return (ft_print_ptr(va_arg(*args, void *)));
	if (c == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *input, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	if (!input)
		return (0);
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			i++;
			count += ft_check_var(input[i], &args);
		}
		else
		{
			write(1, &input[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
