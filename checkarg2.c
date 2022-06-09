/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarg2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:48:02 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/10 14:29:17 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	only_nb(char **ar, int i)
{
	int	j;

	while (ar[++i])
	{
		j = 0;
		while (ar[i][j])
		{
			if (ft_isdigit(ar[i][j])
				|| (ar[i][j] == '-' && ft_isdigit(ar[i][j + 1]))
					|| (ar[i][j] == '+' && ft_isdigit(ar[i][j + 1])))
				j++;
			else
				return (0);
		}
	}
	return (1);
}

int	sizeav(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	pos(struct s_stack *stckb, int tg)
{
	int	i;

	i = 0;
	while (stckb->items[i] != tg)
		i++;
	return (i);
}

int	maincheck(char **str)
{
	int	len;

	len = ft_len(*str);
	if (str)
	{
		if (!check_double(str, -1) || !only_nb(str, -1)
			|| !maxint(str, -1))
		{
			ffree(str);
			ft_putstr("Error\nThe numbers are Wrong");
			return (0);
		}
		ffree(str);
	}
	else if (!ch(str, len, 0, 0) || !only_nb(str, 0) || !maxint(str, 0))
	{
		ft_putstr("Error\nThe numbers are Wrong");
		return (0);
	}
	return (1);
}
