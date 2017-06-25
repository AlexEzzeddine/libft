/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 21:44:24 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/06/24 21:45:04 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*dup;
	int		i;

	dup = ft_strnew(n);
	if (!dup)
		return (NULL);
	ft_strncpy(dup, src);
	return (dup);
}