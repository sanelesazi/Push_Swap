/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getstack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 17:17:35 by ssibiya           #+#    #+#             */
/*   Updated: 2017/10/19 16:22:00 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

t_stack	*ft_getstack(void)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
