/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findbig.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:57:02 by ssibiya           #+#    #+#             */
/*   Updated: 2017/10/16 14:17:43 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_findbig(t_stack *s)
{
	t_stack	*first;
	int		big;

	first = s;
	big = first->data;
	while (first->next != NULL)
	{
		first = first->next;
		if (first->data > big)
		{
			big = first->data;
			first = s;
		}
	}
	return (big);
}
