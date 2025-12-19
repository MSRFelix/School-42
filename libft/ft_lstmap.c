#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*dummy;

	new_list = 0;
	if (!f || !del)
		return (0);
	while (lst)
	{
		dummy = ft_lstnew(f(lst->content));
		if (!dummy)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		ft_lstadd_back(&new_list, dummy);
		lst = lst->next;
	}
	return (new_list);
}
