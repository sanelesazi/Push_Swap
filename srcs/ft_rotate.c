/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 13:12:50 by ssibiya           #+#    #+#             */
/*   Updated: 2017/10/16 14:20:36 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_rotate(t_stack **s)
{
	t_stack	*first;
	t_stack	*newlast;

	if ((*s)->next != NULL)
	{
		first = (*s);
		newlast = (*s);
		(*s) = (*s)->next;
		(*s)->prev = NULL;
		while (newlast->next != NULL)
			newlast = newlast->next;
		newlast->next = first;
		first->next = NULL;
		first->prev = newlast;
	}
	else if ((*s)->next == NULL)
	{
		write(1, "KO\n", 3);
		exit(-1);
	}
}
