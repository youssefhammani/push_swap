/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:48:31 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/11 02:26:30 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*s;

	i = 0;
	while (src[i])
		i++;
	s = (char *)malloc(i + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ffree1(char **str, struct s_stack *stcka, struct s_stack *stckb)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
	free(stcka->items);
	free(stcka);
	free(stckb->items);
	free(stckb);
}
