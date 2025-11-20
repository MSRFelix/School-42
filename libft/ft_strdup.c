#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*storage;

	i = 0;
	j = 0;
	while (s[i] != 0)
		i++;
	storage = malloc((i + 1) * sizeof(char));
	if (storage == NULL)
		return (NULL);
	else
	{
		while (j < i)
		{
			storage[j] = s[j];
			j++;
		}
		storage[j] = 0;
	}
	storage[j] = 0;
	return (storage);
}
/*
#include <stdio.h>
#include <string.h>

int     main(int argc, char *argv[])
{
        if (argc == 2)
	{	
        	char    *ptr = ft_strdup(argv[1]);
		char	*ptr2 = strdup(argv[1]);
       		printf("%s\n", ptr);
        	printf("%s\n", ptr2);
        	free(ptr);
		free(ptr2);
	}
        return (0);
}
*/
