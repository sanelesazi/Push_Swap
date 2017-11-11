/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:37:43 by ssibiya           #+#    #+#             */
/*   Updated: 2017/11/10 15:07:06 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static int	ft_print(t_stack **a, t_stack **b, int ra, int rb)
{
	if (ra == 1 || rb == 1)
	{
		if (ra == 1 && rb == 0)
		{
			ft_rotate(a);
			write(1, "ra\n", 3);
		}
		else if (rb == 1 && ra == 0)
		{
			ft_rotate(b);
			write(1, "rb\n", 3);
		}
		else if (ra == 1 && rb == 1)
		{
			ft_rr(a, b);
			write(1, "rr\n", 3);
		}
		return (1);
	}
	return (0);
}

int			ft_dorot(t_stack **a, t_stack **b, int pushed)
{
	t_stack	*last;
	int		ra;
	int		rb;

	ra = 0;
	rb = 0;
	if (ft_lstlen((*a)) > 1 || pushed == 1)
	{
		if (pushed == 1 && ft_lstlen((*b)))
		{
			if ((*a)->data < (*b)->data)
				ra = 1;
		}
		else if ((*a)->data == ft_findbig((*a)))
			ra = 1;
	}
	if (ft_lstlen((*b)) > 1)
	{
		last = ft_getlast((*b));
		if ((*b)->data == ft_findsmall((*b)) || pushed == 2)
			rb = 1;
		if ((*b)->data < (*b)->next->data && (*b)->data < last->data)
			rb = 1;
	}
	return (ft_print(a, b, ra, rb));
}
