/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 02:34:42 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/06/12 22:16:13 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count_words(char const *str, char c)
{
	int w;
	int is_last_space;

	w = 0;
	is_last_space = 1;
	while (*str)
	{
		if (*str != c && is_last_space)
		{
			w++;
			is_last_space = 0;
		}
		else if (*str == c)
			is_last_space = 1;
		str++;
	}
	return (w);
}

static	int		get_next_word_pos(char const *str, int pos, char c)
{
	while (str[pos] == c)
		pos++;
	return (pos);
}

static	int		get_word_length(char const *str, int pos, char c)
{
	int length;

	length = 0;
	while (!(str[pos + length] == c || str[pos + length] == '\0'))
		length++;
	return (length);
}

static	int		set_word(char **dst, char const *str, char c, int pos)
{
	int l;

	l = get_word_length(str, pos, c);
	*dst = ft_strsub(str, pos, l);
	return (pos + l);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		pos;
	int		i;
	int		words;

	i = 0;
	pos = 0;
	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = (char **)malloc(sizeof(char*) * (words + 1));
	if (!res)
		return (NULL);
	while (i < words)
	{
		pos = get_next_word_pos(s, pos, c);
		pos = set_word(&res[i], s, c, pos);
		i++;
	}
	res[i] = 0;
	return (res);
}
