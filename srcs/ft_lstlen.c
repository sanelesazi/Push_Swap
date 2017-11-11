/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <ssibiya@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 20:13:31 by ssibiya           #+#    #+#             */
/*   Updated: 2017/11/10 14:18:48 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_lstlen(t_stack *s)
{
	int		len;
	t_stack	*copy_s;

	copy_s = s;
	len = 0;
	while (copy_s != NULL)
	{
		copy_s = copy_s->next;
		len++;
	}
	return (len);
}
