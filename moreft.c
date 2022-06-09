/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moreft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:24:24 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/05 13:55:00 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	fdr(struct s_stack *stcka, int md)
{
	int	i;

	i = -1;
	while (++i < stcka->size)
	{
		if (md > stcka->items[i])
			return (0);
	}
	return (1);
}

int	search(struct s_stack *stck, int sr, int end)
{
	int	i;

	i = -1;
	while (stck->items[++i] != end)
		if (sr == stck->items[i])
			return (0);
	return (1);
}

int	search_lc(struct s_stack *stck, int sr)
{
	int	i;

	i = -1;
	while (++i < stck->size)
		if (sr == stck->items[i])
			return (0);
	return (1);
}
