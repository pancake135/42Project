/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujchoi <ujchoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:48:45 by ujchoi            #+#    #+#             */
/*   Updated: 2026/10/23 13:07:40 by ujchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	temp = *lst;
	while (*lst != NULL)
	{
		del((*lst)->content);
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
}
