/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 13:46:47 by ssibiya           #+#    #+#             */
/*   Updated: 2017/10/16 14:27:25 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_asort(t_stack *a)
{
	int		sort;
	t_stack	*copy_a;

	copy_a = a;
	sort = 0;
	if (copy_a != NULL)
	{
		if (copy_a->next == NULL)
			return (1);
		while (copy_a->next != NULL)
		{
			if (copy_a->data < copy_a->next->data)
			{
				sort = 1;
				copy_a = copy_a->next;
			}
			else
				return (0);
		}
		return (sort);
	}
	return (sort);
}
