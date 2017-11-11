/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findsecsmall.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:30:30 by ssibiya           #+#    #+#             */
/*   Updated: 2017/10/16 14:18:33 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_findsecsmall(t_stack *a, int smaller)
{
	int		secsmall;
	t_stack	*head;

	head = a;
	secsmall = a->data;
	a = a->next;
	while (a != NULL)
	{
		if (a->data < secsmall && a->data > smaller)
			secsmall = a->data;
		a = a->next;
	}
	a = head;
	return (secsmall);
}
