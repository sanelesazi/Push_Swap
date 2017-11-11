/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 13:46:47 by ssibiya           #+#    #+#             */
/*   Updated: 2017/10/16 14:16:14 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_dsort(t_stack *b)
{
	int	sort;

	sort = 0;
	if (b != NULL)
	{
		if (b && b->next == NULL)
			return (1);
		while (b->next != NULL)
		{
			if (b->data > b->next->data)
			{
				sort = 1;
				b = b->next;
			}
			else
				return (0);
		}
		return (sort);
	}
	return (sort);
}
