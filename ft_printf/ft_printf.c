#include "libftprintf.h"

void	ft_check_var(char c)
{
	if (c == 'c')
		ft_print_char(c);
}

int	ft_printf(const char input*, ...)
{
	int	i;
	int	param;
	va_list	args;

	va_start(args, input);
	if (!input)
		return (0);
	while (input[i])
	{
		if (input[i] == '%')
		{
			i++;
			ft_check_var(input[i], args);
		}
		else
			write(1, &input[i], 1);
		i++;
	}
	return (0);
}
