#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = malloc(nelem * elsize);
	if (!(a))
		return (0);
	while (i < nelem * elsize)
	{
		a[i] = 0;
		i++;
	}
	return ((void *) a);
}
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	int a = 4;
	int b = 1;
	int i = 0;
	char	*str1 = calloc(a, b);
	char	*str2 = ft_calloc(a, b);
	while (i < a)
	{
		printf("%d", str1[i]);
		i++;
	}
	i = 0;
	write(1,"\n", 1);
	while (i < a)
	{
		printf("%d", str2[i]);
		i++;
	}
	free(str1);
	free(str2);
	return (0);
}
