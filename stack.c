/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:51:45 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/05 13:57:56 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swt(struct s_stack *stck, char *str)
{
	int	tmp;

	if (stck->size >= 2)
	{
		tmp = stck->items[0];
		stck->items[0] = stck->items[1];
		stck->items[1] = tmp;
		ft_putstr(str);
	}
}

void	pa(struct s_stack *stcka, struct s_stack *stckb, char *str)
{
	int	tmp;
	int	i;
	int	j;

	if (!isempty(stckb))
	{
		j = -1;
		i = 0;
		tmp = stckb->items[0];
		while (++i < stckb->size)
			stckb->items[++j] = stckb->items[i];
		stckb->size--;
		stcka->size++;
		i = stcka->size;
		while (--i)
			stcka->items[i] = stcka->items[i - 1];
		stcka->items[0] = tmp;
		ft_putstr(str);
	}
}

void	pb(struct s_stack *stckb, struct s_stack *stcka, char *str)
{
	int	tmp;
	int	i;

	if (!isempty(stcka))
	{
		i = -1;
		tmp = stcka->items[0];
		while (++i < stcka->size)
			stcka->items[i] = stcka->items[i + 1];
		stcka->size--;
		stckb->size++;
		i = stckb->size;
		while (--i)
			stckb->items[i] = stckb->items[i - 1];
		stckb->items[0] = tmp;
		ft_putstr(str);
	}
}

void	rev_rotate(struct s_stack *stck, char *str)
{
	int	tmp;
	int	i;

	if (!isempty(stck))
	{
		i = stck->size;
		tmp = stck->items[stck->size - 1];
		while (--i)
		{
			stck->items[i] = stck->items[i - 1];
		}
		stck->items[0] = tmp;
		ft_putstr(str);
	}
}

void	rotate(struct s_stack *stck, char *str)
{
	int	tmp;
	int	i;

	if (!isempty(stck))
	{
		tmp = stck->items[0];
		i = -1;
		while (++i < stck->size)
			stck->items[i] = stck->items[i + 1];
		stck->items[stck->size - 1] = tmp;
		ft_putstr(str);
	}
}
