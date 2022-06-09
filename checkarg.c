/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:47:47 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/09 22:54:04 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(char **av, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		if (ft_atoi(av[i]) == ft_atoi(av[j]))
			return (0);
		i++;
	}
	return (1);
}

int	ch(char **av, int ac, int k, int j)
{
	int	*p;
	int	i;

	i = 0;
	p = malloc(sizeof(int) * ac);
	while (++i < ac)
	{
		p[i - 1] = ft_atoi(av[i]);
	}
	while (k < i)
	{
		j = k + 1;
		while (j < i - 1)
		{
			if (p[k] == p[j])
			{
				free(p);
				return (0);
			}
			j++;
		}
		k++;
	}
	free(p);
	return (1);
}

int	check_double(char **av, int i)
{
	while (av[++i])
	{
		if (!check(av, i) || !av[i])
			return (0);
	}
	return (1);
}

int	maxint(char **av, int i)
{
	while (av[++i])
	{
		if (ft_atoi(av[i]) > 2147483647 || ft_atoi(av[i]) < -2147483648)
			return (0);
	}
	return (1);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
