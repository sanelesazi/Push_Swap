/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 13:23:30 by ssibiya           #+#    #+#             */
/*   Updated: 2017/11/10 14:46:59 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_printer(t_stack *a, t_stack *b)
{
	t_stack		*aa;
	t_stack		*bb;
	static int	ins = 0;

	aa = a;
	bb = b;
	write(1, "=============================\n", 30);
	while (aa != NULL || bb != NULL)
	{
		if (aa == NULL)
			write(1, " ", 1);
		else
		{
			ft_putnbr(aa->data);
			aa = aa->next;
		}
		if (bb == NULL)
			write(1, "\t\n", 2);
		else
		{
			write(1, "\t", 1);
			ft_putnbr(bb->data);
			write(1, "\n", 1);
			bb = bb->next;
		}
	}
	printf("instruction no.: %i\n", ins++);
}
