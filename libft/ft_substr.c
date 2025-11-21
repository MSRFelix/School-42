#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(len);
	if (!(str))
		return (0);
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/*
#include <unistd.h>
int	main(void)
{
	char	hay[] = "Hello there, i am now";
	int	a = 1;
	int	len = 1; 
	char	*str1 = ft_substr(hay, a, len);
	write(1, str1, len);
	free(str1);
	return (0);
}
*/
