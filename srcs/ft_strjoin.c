/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 02:39:57 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/09/24 22:20:23 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*dst;

	if (!s1 && !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dst = (char *)malloc(len1 + len2 + 1);
	if (!dst)
		return (NULL);
	if (s1)
		ft_strcpy(dst, s1);
	if (s2)
		ft_strcat(dst, s2);
	return (dst);
}
