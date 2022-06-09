/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:49:29 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/05 13:52:42 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	md1(int md, struct s_stack *stcka, struct s_stack *stckb)
{
	while (md > stcka->items[0])
		pb(stckb, stcka, "pb");
}

void	md2(int md, struct s_stack *stcka)
{
	while (md > stcka->items[stcka->size - 1])
		rev_rotate(stcka, "rra");
}

void	md3(int md, struct s_stack *stcka)
{
	while (md <= stcka->items[0] && !fdr(stcka, md))
		rotate(stcka, "ra");
}
