/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 22:13:34 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/09/08 01:36:21 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sorted_list_insert(t_list **begin_list, t_list *new, int (*cmp)())
{
	t_list		*current;

	if (!*begin_list)
	{
		*begin_list = new;
		return ;
	}
	else if (cmp((*begin_list)->content, new->content) > 0)
	{
		current = *begin_list;
		*begin_list = new;
		(*begin_list)->next = current;
		return ;
	}
	current = *begin_list;
	while (current->next && cmp(current->next->content, new->content) < 0)
		current = current->next;
	new->next = current->next;
	current->next = new;
}
