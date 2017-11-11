/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doswap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 13:43:24 by ssibiya           #+#    #+#             */
/*   Updated: 2017/11/08 12:46:58 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static int	ft_print(int swap_a, int swap_b, t_stack *a, t_stack *b)
{
	if (swap_a == 1 && swap_b == 0)
	{
		write(1, "sa\n", 3);
		ft_swap(a);
		return (1);
	}
	else if (swap_b == 1 && swap_a == 0)
	{
		write(1, "sb\n", 3);
		ft_swap(b);
		return (1);
	}
	else if (swap_a == 1 && swap_b == 1)
	{
		write(1, "ss\n", 3);
		ft_ss(a, b);
		return (1);
	}
	return (0);
}

int			ft_doswap(t_stack *a, t_stack *b)
{
	t_stack	*last;
	int		sa;
	int		sb;

	sa = 0;
	sb = 0;
	if (ft_lstlen(a) > 1 && a->data != ft_findbig(a))
	{
		last = ft_getlast(a);
		if (a->data > a->next->data && a->next->data < last->data)
			sa = 1;
	}
	if (ft_lstlen(b) > 1)
	{
		if (ft_lstlen(b) == 2 && ft_findsmall(b) == b->data)
			sb = 1;
		if (b->data < b->next->data && ft_findsmall(b) != b->data)
			sb = 1;
	}
	return (ft_print(sa, sb, a, b));
}
