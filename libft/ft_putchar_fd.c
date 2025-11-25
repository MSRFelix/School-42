#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
int	main(void)
{
	char	*s = "hello, my friend !!";
	int		i;

	i = -1;
	while (s[++i])
		ft_putchar_fd(s[i], 1);

	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putchar_fd('C', fd);
	close(fd);
	return (0);
}
*/
