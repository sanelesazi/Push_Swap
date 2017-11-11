/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findsecbig.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:57:02 by ssibiya           #+#    #+#             */
/*   Updated: 2017/10/17 12:58:36 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_findsecbig(t_stack *s)
{
	t_stack	*first;
	int		big;
	int		secbig;

	first = s;
	big = ft_findbig(s);
	secbig = first->data;
	while (first != NULL)
	{
		if (first->data > secbig && first->data != big)
			secbig = first->data;
		first = first->next;
	}
	return (secbig);
}
