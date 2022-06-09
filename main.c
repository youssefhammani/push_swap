/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:30:57 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/11 02:30:54 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_av(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (!ft_atoi(av[i]))
		{
			write(2, "Error\n", 7);
			exit(1);
		}
		i++;
	}
}

void	do_two(struct s_stack *stcka)
{
	if (stcka->items[0] > stcka->items[1])
		swt(stcka, "sa");
}

int	main(int ac, char **av)
{
	t_list			var;
	struct s_stack	*stcka;
	struct s_stack	*stckb;

	stcka = (struct s_stack *)malloc(sizeof(struct s_stack));
	stckb = (struct s_stack *)malloc(sizeof(struct s_stack));
	if (!stcka || !stckb)
		return (0);
	var.sep = ' ';
	var.i = 1;
	if (ac == 1)
		exit(1);
	check_av(av);
	var.str = ft_split(ft_strjoin(ac - 1, av + 1, " "), var.sep);
	if (!maincheck(var.str))
		return (0);
	if (ac == 2)
		ac2(stcka, stckb, var.str, av);
	if (ac > 2)
		ac3(stcka, stckb, ac, av);
	if (stcka->size == 2)
		do_two(stcka);
	mainsort(stcka, stckb);
	return (1);
}
