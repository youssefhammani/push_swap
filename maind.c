/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maind.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:49:42 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/11 00:25:28 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ac2(struct s_stack *stcka, struct s_stack *stckb, char **str, char **av)
{
	int	i;

	i = -1;
	str = ft_split(av[1], ' ');
	stcka = init(sizeav(str), stcka);
	stckb = init(sizeav(str), stckb);
	while (str[++i])
		push(stcka, ft_atoi(str[i]));
	ffree(str);
}

void	ac3(struct s_stack *stcka, struct s_stack *stckb, int ac, char **av)
{
	int	i;

	i = 0;
	stcka = init(ac - 1, stcka);
	stckb = init(ac - 1, stckb);
	while (++i < ac)
		push(stcka, ft_atoi(av[i]));
}

void	ffree(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}

void	mainsort(struct s_stack *stcka, struct s_stack *stckb)
{
	if (stcka->size <= 5)
		push_min(stcka, stckb);
	else
	{
		ft_sort1(stcka, stckb);
		ft_sort2(stcka, stckb);
	}
	free(stcka->items);
	free(stcka);
	free(stckb->items);
	free(stckb);
}
