#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*dummy;

	i = 0;
	dummy = lst;
	while (dummy != 0)
	{
		dummy = dummy->next;
		i++;
	}
	return (i);
}
