/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pivot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:46:20 by ssibiya           #+#    #+#             */
/*   Updated: 2017/11/10 17:24:20 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static int	*ft_bubblesort(int *array, int len)
{
	int		i;
	int 	temp;

	i = -1;
	temp = 0;
	while (array[++i])
	{
		if (i != (len - 1))
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				i = -1;
			}
		}
	}
	return (array);
}

int			ft_pivot(t_stack **a)
{
	int		pivot;
	int		*stack_array;
	int		len;
	int		i;
	t_stack	*copy_a;

	i = -1;
	pivot = 0;
	len = ft_lstlen((*a));
	copy_a = (*a);
	stack_array = (int*)malloc(sizeof(int) * len);
	while (++i < len && copy_a != NULL)
	{
		stack_array[i] = copy_a->data;
		copy_a = copy_a->next;
	}
	ft_bubblesort(stack_array, len);
	pivot = stack_array[(len / 2) - 1];
	return (pivot);
}
