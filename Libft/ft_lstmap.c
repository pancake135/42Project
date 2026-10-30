/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujchoi <ujchoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 13:12:37 by ujchoi            #+#    #+#             */
/*   Updated: 2026/10/23 14:01:07 by ujchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*head;
	void	*temp;

	head = NULL;
	while (lst != NULL)
	{
		temp = f(lst->content);
		if (temp == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		node = ft_lstnew(temp);
		if (node == NULL)
		{
			del(temp);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
