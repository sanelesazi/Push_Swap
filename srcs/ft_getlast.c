/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <ssibiya@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 00:16:44 by ssibiya           #+#    #+#             */
/*   Updated: 2017/10/19 16:22:41 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

t_stack	*ft_getlast(t_stack *s)
{
	t_stack	*last;

	last = s;
	while (last->next != NULL)
		last = last->next;
	return (last);
}
