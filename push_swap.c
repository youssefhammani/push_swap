/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:30:47 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/05 13:55:26 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

struct s_stack	*init(int cp, struct s_stack *stck)
{
	stck->size = 0;
	stck->maxsize = cp;
	stck->items = (int *)malloc(sizeof(int) * cp);
	return (stck);
}

int	isempty(struct s_stack *stck)
{
	if (stck->size == 0)
		return (1);
	return (0);
}

void	push(struct s_stack *stck, int nv)
{
	stck->items[stck->size] = nv;
	stck->size++;
}

int	issorted(struct s_stack *stck )
{
	int	i;

	i = -1;
	while (++i < stck->size - 1)
		if (stck->items[i] >= stck->items[i + 1])
			return (0);
	return (1);
}

int	max(struct s_stack *stck, int end)
{
	int	i;
	int	max;

	i = -1;
	max = stck->items[0];
	while (stck->items[++i] != end)
		if (max < stck->items[i])
			max = stck->items[i];
	return (max);
}
