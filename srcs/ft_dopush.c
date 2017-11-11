/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dopush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 14:29:10 by ssibiya           #+#    #+#             */
/*   Updated: 2017/11/10 14:45:05 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static int	ft_print(int pa, int pb, t_stack **a, t_stack **b)
{
	if (pa == 1)
	{
		ft_push(a, b);
		write(1, "pa\n", 3);
		return (1);
	}
	else if (pb == 1)
	{
		ft_push(b, a);
		write(1, "pb\n", 3);
		return (2);
	}
	return (0);
}

static int	ft_pb(t_stack **a, t_stack **b, int push)
{
	int		pb;
	t_stack	*last;

	pb = 0;
	if (ft_lstlen((*a)) > 2 && !ft_asort((*a)) && push == 1)
	{
		last = ft_getlast((*a));
		if ((*a)->data < (*a)->next->data && (*a)->data < last->data)
		{
			if (ft_lstlen((*b)) && (*b)->data == ft_findbig((*b)))
			{
				if ((*a)->data > (*b)->data)
					pb = 1;
				else if ((*a)->data < ft_findsmall((*b)))
					pb = 1;
				else if ((*a)->data > (*b)->next->data)
					pb = 1;
			}
			else if (!ft_lstlen((*b)))
				pb = 1;
		}
	}
	return (pb);
}

static int	ft_pa(t_stack **a, t_stack **b, int push)
{
	int		pa;
	t_stack	*last;

	pa = 0;
	if (ft_lstlen((*b)) && push == 2)
	{
		last = ft_getlast((*a));
		if ((*b)->data < (*a)->data || (*b)->data < (*a)->next->data)
		{
			if (last->data == ft_findbig((*a)))
				pa = 1;
			if ((*b)->data > last->data)
				pa = 1;
		}
		if ((*a)->data < (*b)->data && (*a)->data > ft_findsmall((*b)))
			pa = 1;
	}
	return (pa);
}

int			ft_dopush(t_stack **a, t_stack **b, int push)
{
	int		pb;
	int		pa;

	pa = 0;
	if (!(pb = ft_pb(a, b, push)))
		pa = ft_pa(a, b, push);
	return (ft_print(pa, pb, a, b));
}
