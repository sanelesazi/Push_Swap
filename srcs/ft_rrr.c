/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 12:32:11 by ssibiya           #+#    #+#             */
/*   Updated: 2017/10/16 14:21:04 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_revrotate(&(*a));
	ft_revrotate(&(*b));
}