/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <ssibiya@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 20:18:51 by ssibiya           #+#    #+#             */
/*   Updated: 2017/10/16 14:20:16 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_push(t_stack **dest, t_stack **src)
{
	t_stack	*newsrc;
	t_stack	*newdest;

	newdest = NULL;
	if ((*src) != NULL)
	{
		newdest = (*src);
		newsrc = (*src)->next;
		newdest->next = (*dest);
		(*dest) = newdest;
		(*src) = newsrc;
	}
	else
	{
		write(1, "KO\n", 3);
		exit(-1);
	}
}
