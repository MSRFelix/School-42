/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 08:32:50 by flanghof          #+#    #+#             */
/*   Updated: 2025/09/25 09:21:30 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_node;

	new_node = ft_create_elem(data);
	if (!new_node)
		return ;
	new_node->next = begin_list[0];
	*begin_list = new_node;
}

#include <stdio.h>
int	main(void)
{
	int num = 100;
	t_list *node_one = ft_create_elem("first for now");
	t_list *node_two = ft_create_elem("seconde to go");
	node_one->next = node_two;
	t_list	dummy;
	dummy.data = &num;
	dummy.next = node_one;
	while (dummy.next != NULL)
	{
		printf("1: %i\n", *((int*)dummy.data));
		printf("1.next: %p\n", dummy.next);
		dummy = *(dummy.next);
		break ;
	}
	return (0);
}
