/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findsmall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:30:30 by ssibiya           #+#    #+#             */
/*   Updated: 2017/11/10 15:07:29 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_findsmall(t_stack *a)
{
	int		smallest;
	t_stack	*head;

	head = a;
	smallest = a->data;
	a = a->next;
	while (a != NULL)
	{
		if (a->data < smallest)
			smallest = a->data;
		a = a->next;
	}
	a = head;
	return (smallest);
}
