/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 21:09:03 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/06/12 00:59:21 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*csrc;
	unsigned char	*cdst;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		*(cdst + i) = *(csrc + i);
		if (*(csrc + i) == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
