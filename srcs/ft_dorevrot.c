/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorevrot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 13:43:24 by ssibiya           #+#    #+#             */
/*   Updated: 2017/11/10 17:50:48 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static int	ft_print(t_stack **a, t_stack **b, int rra, int rrb)
{
	if (rra == 1 || rrb == 1)
	{
		if (rra == 1 && rrb == 0)
		{
			ft_revrotate(&(*a));
			write(1, "rra\n", 4);
		}
		else if (rrb == 1 && rra == 0)
		{
			ft_revrotate(&(*b));
			write(1, "rrb\n", 4);
		}
		else if (rra == 1 && rrb == 1)
		{
			ft_rrr(&(*a), &(*b));
			write(1, "rrr\n", 4);
		}
		return (1);
	}
	else
		return (0);
}

int			ft_dorevrot(t_stack **a, t_stack **b, int pushed)
{
	t_stack	*last;
	int		rra;
	int		rrb;

	rra = 0;
	rrb = 0;
	if (pushed == 3)
		rra = 1;
	if (ft_lstlen((*a)) > 2 || pushed == 1)
	{
		last = ft_getlast((*a));
		if (pushed == 1 && last->data < (*a)->data)
			rra = 1;
		else if (last->data < (*a)->data && (*a)->data != ft_findbig((*a)))
			rra = 1;
	}
	if (ft_lstlen((*b)) > 2)
	{
		last = ft_getlast((*b));
		if (last->data > (*b)->next->data || last->data > (*b)->data)
			if ((*b)->data != ft_findsmall((*b)))
				rrb = 1;
		if (pushed == 2)
			rrb = 1;
	}
	return (ft_print(a, b, rra, rrb));
}
