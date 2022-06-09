/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:49:55 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/10 04:48:46 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cpy(int ar[], struct s_stack *stck)
{
	int	i;

	i = -1;
	while (++i < stck->size)
		ar[i] = stck->items[i];
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_fugazi_sort(int array[], int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (array[i] > array[j])
				swap(&array[i], &array[j]);
			j++;
		}
		i++;
	}
}

int	median(struct s_stack *stck)
{
	int	*array;
	int	md;

	array = malloc(sizeof(int) * stck->size);
	cpy(array, stck);
	ft_fugazi_sort(array, stck->size);
	md = array[stck->size / 5];
	free(array);
	return (md);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
