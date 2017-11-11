/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 13:12:50 by ssibiya           #+#    #+#             */
/*   Updated: 2017/10/17 14:00:48 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_revrotate(t_stack **s)
{
	t_stack	*first;
	t_stack	*newlast;

	if ((*s)->next != NULL)
	{
		first = (*s);
		while ((*s)->next != NULL)
		{
			newlast = (*s);
			(*s) = (*s)->next;
		}
		newlast->next = NULL;
		(*s)->next = first;
		(*s)->prev = NULL;
	}
	else if ((*s)->next == NULL)
	{
		write(1, "KO\n", 3);
		exit(-1);
	}
}
