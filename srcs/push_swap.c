/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 13:46:41 by ssibiya           #+#    #+#             */
/*   Updated: 2017/11/10 17:57:43 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static int		ft_findbignum(t_stack **a, t_stack **b, int pivot)
{
	t_stack	*aa;
	t_stack	*last;

	aa = (*a);
	last = ft_getlast((*a));
	while ((aa->data < pivot && last->data < pivot) && half != 0)
	{
		aa = aa->next;
		last = last->prev;
	}
}

int				ft_bigpush(t_stack **a, t_stack **b, int pivot)
{
	return (0);
}

static int		ft_findnum(t_stack **a, t_stack **b)
{
	t_stack	*copy_b;
	int		count;
	int		lstlen;

	lstlen = ft_lstlen((*b));
	copy_b = (*b);
	count = 0;
	while (ft_difference((*a)->data, copy_b->data) != ft_smallestdiff((*a), (*b)))
	{
		copy_b = copy_b->next;
		count++;
	}
	if (count <= (lstlen / 2))
	{
		while (ft_difference((*a)->data, (*b)->data) != ft_smallestdiff((*a), (*b)))
			ft_dorot(a, b, 2);
	}
	else if (count > (lstlen / 2))
	{
		while (ft_difference((*a)->data, (*b)->data) != ft_smallestdiff((*a), (*b)))
			ft_dorevrot(a, b, 2);
	}
	ft_push(b, a);
	write(1, "pb\n", 3);
	return (1);
}

int				ft_pushswap(t_stack **a, t_stack **b)
{
	int			execute;
	static int	pushed = 0;

	execute = 0;
	if (!ft_asort((*a)) || pushed == 0)
		if (!(execute = ft_doswap((*a), (*b))))
			if (!(execute = ft_dorevrot(a, b, 0)))
				if (!(execute = ft_dorot(a, b, 0)))
					execute = ft_dopush(a, b, 1);
	if ((ft_asort((*a)) && ft_lstlen((*b))) || pushed == 1)
	{
		if (!(execute = ft_dopush(a, b, 2)))
			if (!(execute = ft_dorot(a, b, 0)))
				execute = ft_dorevrot(a, b, 1);
		pushed = 1;
		execute = ft_doswap((*a), (*b));
	}
	else if (execute == 0)
		ft_findnum(a, b);
	if (ft_asort((*a)) && !ft_lstlen((*b)))
		return (5);
	return (execute);
}

int				main(int ac, char **av)
{
	t_stack		*a_stack;
	t_stack		*b_stack;
	t_stack		*start;
	static int	list_len = 0;
	static int	pivot;

	if (ac > 1)
	{
		a_stack = ft_getstack();
		a_stack->prev = NULL;
		start = a_stack;
		b_stack = NULL;
		if (ft_store(a_stack, av, ac) == -1)
			return (-1);
		if (ft_errhandler(av, a_stack) == 1)
			return (-1);
		list_len = ft_lstlen(a_stack);
		pivot = ft_pivot(&a_stack);
		while (1)
		{
			if (list_len <= 20)
			{
				if (ft_pushswap(&a_stack, &b_stack) == 5)
					break ;
			}
			else if (list_len > 20)
			{
				if (ft_bigpush(&a_stack, &b_stack, pivot) == 5)
					break ;
			}
		}
	}
	return (0);
}
