/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:48:18 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/14 00:07:37 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*get_next_line(int fd)
{
	char	str[8000000];
	int		i;
	char	buff[1];
	int		byte;

	byte = read(fd, buff, 1);
	i = 0;
	while (byte > 0)
	{
		str[i++] = buff[0];
		if (buff[0] == '\n')
			break ;
		byte = read(fd, buff, 1);
	}
	str[i] = '\0';
	if (str[0] == '\0')
		return (0);
	return (ft_strdup(str));
}

void	checker_2(struct s_stack *stcka, struct s_stack *stckb, char *str)
{
	if (!ft_strcmp("pa\n", str))
		pa(stcka, stckb, "0");
	else if (!ft_strcmp("rrr\n", str))
		rrr(stcka, stckb, "0");
	else if (!ft_strcmp("ss\n", str))
		ss(stcka, stckb, "0");
	else if (!ft_strcmp("rr\n", str))
		rr(stcka, stckb, "0");
	else
		ft_putstr("Error\n");
}

void	checker(struct s_stack *stcka, struct s_stack *stckb)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		if (!ft_strcmp("rra\n", str))
			rev_rotate(stcka, "0");
		else if (!ft_strcmp("ra\n", str))
			rotate(stcka, "0");
		else if (!ft_strcmp("sa\n", str))
			swt(stcka, "0");
		else if (!ft_strcmp("rrb\n", str))
			rev_rotate(stckb, "0");
		else if (!ft_strcmp("rb\n", str))
			rotate(stckb, "0");
		else if (!ft_strcmp("sb\n", str))
			swt(stckb, "0");
		else if (!ft_strcmp("pb\n", str))
			pb (stckb, stcka, "0");
		else
			checker_2(stcka, stckb, str);
		str = get_next_line(0);
	}
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
	var.str = ft_split(ft_strjoin(ac - 1, av + 1, " "), ' ');
	if (!maincheck(var.str))
		return (0);
	if (ac == 2)
		ac2(stcka, stckb, var.str, av);
	if (ac > 2)
		ac3(stcka, stckb, ac, av);
	if (issorted(stcka))
		return (0);
	checker(stcka, stckb);
	if (issorted(stcka) && isempty(stckb))
		ft_putstr("OK");
	else
		ft_putstr("KO");
	return (0);
	ffree1(var.str, stcka, stckb);
	return (1);
}
