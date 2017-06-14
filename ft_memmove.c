/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 00:53:26 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/06/12 00:59:55 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*csrc;
	char	*cdst;
	size_t	i;

	i = 0;
	csrc = (char *)src;
	cdst = (char *)dst;
	if (csrc < cdst)
		while (len--)
			*(cdst + len) = *(csrc + len);
	else
		while (i < len)
		{
			*(cdst + i) = *(csrc + i);
			i++;
		}
	return (dst);
}
