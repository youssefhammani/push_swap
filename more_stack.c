/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:50:35 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/10 04:50:38 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(struct s_stack *stcka, struct s_stack *stckb, char *s)
{
	swt(stcka, "");
	swt(stckb, "");
	ft_putstr(s);
}

void	rr(struct s_stack *stcka, struct s_stack *stckb, char *s)
{
	rotate(stcka, "");
	rotate(stckb, "");
	ft_putstr(s);
}

void	rrr(struct s_stack *stcka, struct s_stack *stckb, char *s)
{
	rev_rotate(stcka, "");
	rev_rotate(stckb, "");
	ft_putstr(s);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	if (str[++i] != '0')
	{
		while (str[i])
			ft_putchar(str[i++]);
		if (ft_len(str))
			ft_putchar('\n');
	}
}
