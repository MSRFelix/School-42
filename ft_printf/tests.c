
#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	int		ret_ft;
	int		ret_pf;
	char	*str = "Hello, 42!";
	char	*null_str = NULL;
	int		n = 42;
	void	*ptr = &n;
	void	*null_ptr = NULL;

	printf("=====================================\n");
	printf("CHAR %%c\n");
	printf("=====================================\n");

	ret_pf = printf("printf   : [%c]\n", 'A');
	ret_ft = ft_printf("ft_printf: [%c]\n", 'A');
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	ret_pf = printf("printf   : [%c]\n", 0);
	ret_ft = ft_printf("ft_printf: [%c]\n", 0);
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	printf("=====================================\n");
	printf("STRING %%s\n");
	printf("=====================================\n");

	ret_pf = printf("printf   : [%s]\n", str);
	ret_ft = ft_printf("ft_printf: [%s]\n", str);
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	ret_pf = printf("printf   : [%s]\n", "");
	ret_ft = ft_printf("ft_printf: [%s]\n", "");
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	ret_pf = printf("printf   : [%s]\n", null_str);
	ret_ft = ft_printf("ft_printf: [%s]\n", null_str);
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	printf("=====================================\n");
	printf("POINTER %%p\n");
	printf("=====================================\n");

	ret_pf = printf("printf   : [%p]\n", ptr);
	ret_ft = ft_printf("ft_printf: [%p]\n", ptr);
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	ret_pf = printf("printf   : [%p]\n", null_ptr);
	ret_ft = ft_printf("ft_printf: [%p]\n", null_ptr);
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	printf("=====================================\n");
	printf("SIGNED %%d %%i\n");
	printf("=====================================\n");

	ret_pf = printf("printf   : [%d]\n", n);
	ret_ft = ft_printf("ft_printf: [%d]\n", n);
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	ret_pf = printf("printf   : [%i]\n", -42);
	ret_ft = ft_printf("ft_printf: [%i]\n", -42);
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	ret_pf = printf("printf   : [%d]\n", INT_MAX);
	ret_ft = ft_printf("ft_printf: [%d]\n", INT_MAX);
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	ret_pf = printf("printf   : [%d]\n", INT_MIN);
	ret_ft = ft_printf("ft_printf: [%d]\n", INT_MIN);
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	printf("=====================================\n");
	printf("UNSIGNED %%u\n");
	printf("=====================================\n");

	ret_pf = printf("printf   : [%u]\n", 0);
	ret_ft = ft_printf("ft_printf: [%u]\n", 0);
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	ret_pf = printf("printf   : [%u]\n", UINT_MAX);
	ret_ft = ft_printf("ft_printf: [%u]\n", UINT_MAX);
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	printf("=====================================\n");
	printf("HEX %%x %%X\n");
	printf("=====================================\n");

	ret_pf = printf("printf   : [%x]\n", 255);
	ret_ft = ft_printf("ft_printf: [%x]\n", 255);
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	ret_pf = printf("printf   : [%X]\n", 255);
	ret_ft = ft_printf("ft_printf: [%X]\n", 255);
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	ret_pf = printf("printf   : [%x]\n", 0);
	ret_ft = ft_printf("ft_printf: [%x]\n", 0);
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	printf("=====================================\n");
	printf("PERCENT %%%%\n");
	printf("=====================================\n");

	ret_pf = printf("printf   : [%%]\n");
	ret_ft = ft_printf("ft_printf: [%%]\n");
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	printf("=====================================\n");
	printf("MIXED / STRESS TEST\n");
	printf("=====================================\n");

	ret_pf = printf(
		"printf   : %c %s %p %d %i %u %x %X %%\n",
		'A', "test", ptr, -1, 42, 42u, 42, 42);
	ret_ft = ft_printf(
		"ft_printf: %c %s %p %d %i %u %x %X %%\n",
		'A', "test", ptr, -1, 42, 42u, 42, 42);
	printf("ret printf=%d | ft_printf=%d\n\n", ret_pf, ret_ft);

	return (0);
}
