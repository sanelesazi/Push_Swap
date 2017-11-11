/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smallestdiff.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 14:47:24 by ssibiya           #+#    #+#             */
/*   Updated: 2017/11/10 14:39:32 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_smallestdiff(t_stack *a, t_stack *b)
{
	int		diff;
	t_stack	*copy_b;

	if (ft_lstlen(a) > 1 && ft_lstlen(b) > 0)
	{
		diff = ft_findbig(b);
		copy_b = b;
		while (copy_b != NULL)
		{
			if (diff > ft_difference(copy_b->data, a->data))	
				diff = ft_difference(copy_b->data, a->data);
			copy_b = copy_b->next;
		}
		return (diff);
	}
	return (0);
}
