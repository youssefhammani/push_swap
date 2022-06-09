/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:50:19 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/05 13:53:26 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "push_swap.h"

int	max_lc(struct s_stack *stck)
{
	int	i;
	int	max;

	i = -1;
	max = stck->items[0];
	while (++i < stck->size)
		if (max < stck->items[i])
			max = stck->items[i];
	return (max);
}

int	min(struct s_stack *stck)
{
	int	i;
	int	min;

	i = -1;
	min = stck->items[0];
	while (++i < stck->size)
		if (min > stck->items[i])
			min = stck->items[i];
	return (min);
}
