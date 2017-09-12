/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 21:10:04 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/09/12 07:46:03 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !*alst)
		return ;
	if ((*alst)->next)
		ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(&(*alst), del);
}
