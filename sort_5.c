/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:51:34 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/11 00:20:53 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb_rra(struct s_stack *stckb, struct s_stack *stcka, int tg, char *str)
{
	while (search_lc(stcka, tg) == 0)
	{
		if (stcka->items[0] == tg)
			pb(stckb, stcka, "pb");
		rev_rotate(stcka, str);
	}
}

void	pb_ra(struct s_stack *stckb, struct s_stack *stcka, int tg, char *str)
{
	while (search_lc(stcka, tg) == 0)
	{
		if (stcka->items[0] == tg)
			pb(stckb, stcka, "pb");
		rotate(stcka, str);
	}
}

void	push_min(struct s_stack *stcka, struct s_stack *stckb)
{
	int	m;
	int	dm;
	int	p;

	if (issorted(stcka))
		return ;
	while (stcka->size != 3)
	{
		m = min(stcka);
		dm = stcka->size / 2;
		p = pos(stcka, m);
		if (p < dm)
			pb_ra(stckb, stcka, m, "ra");
		else
			pb_rra(stckb, stcka, m, "rra");
	}
	if (stcka->items[0] > stcka->items[1] && stcka->items[0] > stcka->items[2]
		&& stcka->items[2] > stcka->items[1])
		rev_rotate(stcka, "rra");
	sort_3(stcka, stckb);
}

void	sort_3(struct s_stack *stcka, struct s_stack *stckb)
{
	int	m;

	if (stcka->items[0] > stcka->items[1] && stcka->items[0] > stcka->items[2]
		&& stcka->items[1] > stcka->items[2])
	{
		rotate(stcka, "ra");
		swt(stcka, "sa");
	}
	else if (stcka->items[0] < stcka->items[1] && stcka->items[0] < \
		stcka->items[2] && stcka->items[2] < stcka->items[1])
	{
		rev_rotate(stcka, "rra");
		swt(stcka, "sa");
	}
	else if (stcka->items[0] > stcka->items[1] && stcka->items[0] < \
		stcka->items[2] && stcka->items[2] > stcka->items[1])
		swt(stcka, "sa");
	else if (stcka->items[0] < stcka->items[1] && stcka->items[0] > \
		stcka->items[2] && stcka->items[2] < stcka->items[1])
		rev_rotate(stcka, "rra");
	m = stckb->size;
	while (m--)
		pa(stckb, stcka, "pa");
}
