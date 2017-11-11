/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:51:57 by ssibiya           #+#    #+#             */
/*   Updated: 2017/10/19 16:23:39 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_swap(t_stack *s)
{
	int	firstdata;

	if (s == NULL)
	{
		write(1, "KO\n", 3);
		exit(-1);
	}
	else if (s->next != NULL)
	{
		firstdata = s->data;
		s->data = s->next->data;
		s->next->data = firstdata;
	}
	else if (s->next == NULL)
	{
		write(1, "KO\n", 3);
		exit(-1);
	}
}
