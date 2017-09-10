/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 21:32:44 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/09/08 01:36:58 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrealloc(char *old_buf, size_t size)
{
	char *new_buf;

	if (!old_buf)
	{
		new_buf = ft_strnew(size);
		return (new_buf);
	}
	new_buf = ft_strnew(ft_strlen(old_buf) + size);
	ft_strcpy(new_buf, old_buf);
	ft_strdel(&old_buf);
	return (new_buf);
}
