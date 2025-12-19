#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*dummy;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr)
	{
		dummy = curr->next;
		del(curr->content);
		free(curr);
		curr = dummy;
	}
	*lst = 0;
}
