/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1sort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:47:28 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/14 00:13:01 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushmin(struct s_stack *stcka, struct s_stack *stckb)
{
	int	m;

	while (stcka->size > 2)
	{
		m = min(stcka);
		if (stcka->items[0] == m)
			pb(stckb, stcka, "pb");
		rotate(stcka, "ra");
	}
}

void	ft_sort1(struct s_stack *stcka, struct s_stack *stckb)
{
	int	md;
	int	wh;

	wh = 1;
	if (issorted(stcka))
		return ;
	while (stcka->size > 5)
	{
		md = median(stcka);
		wh = 1;
		while (wh && !fdr(stcka, md))
		{
			md1(md, stcka, stckb);
			md2(md, stcka);
			md3(md, stcka);
			if (fdr(stcka, md))
				wh = 0;
		}
	}
	pushmin(stcka, stckb);
	if (!issorted(stcka))
		swt(stcka, "sa");
}

void	pa_ra(struct s_stack *stckb, struct s_stack *stcka, int tg, char *str)
{
	while (search_lc(stckb, tg) == 0)
	{
		if (stckb->items[0] == tg)
			pa(stcka, stckb, "pa");
		rotate(stckb, str);
	}
}

void	pa_rra(struct s_stack *stckb, struct s_stack *stcka, int tg, char *str)
{
	while (search_lc(stckb, tg) == 0)
	{
		if (stckb->items[0] == tg)
			pa(stcka, stckb, "pa");
		rev_rotate(stckb, str);
	}
}

void	ft_sort2(struct s_stack *stcka, struct s_stack *stckb)
{
	int	tg;
	int	demlen;
	int	v;

	if (issorted(stcka) && isempty(stckb))
		return ;
	while (stckb->size)
	{
		tg = max_lc(stckb);
		demlen = stckb->size / 2;
		v = pos(stckb, tg);
		if (v <= demlen)
			pa_ra(stckb, stcka, tg, "rb");
		else
			pa_rra(stckb, stcka, tg, "rrb");
	}
}
