/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:49:06 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/10 14:02:13 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

static char	*ft_free(char **split, const char *start, size_t len)
{
	char	*copy;	

	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
	{
		while ((*split)--)
			free (*split);
		free (split);
		return (0);
	}
	ft_strlcpy (copy, start, len + 1);
	return (copy);
}

static size_t	ft_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	const char	*start;
	char		**split;
	size_t		len;

	i = 0;
	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof (*split) * ft_count(s, c) + 1);
	if (!split)
		return (0);
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		start = s;
		len = 0;
		s--;
		while (*(++s) && *s != c)
			len++;
		if (*(s - 1) != c)
			split[i++] = ft_free(split, start, len);
	}
	split[i] = 0;
	return (split);
}
