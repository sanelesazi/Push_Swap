/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 10:27:55 by ssibiya           #+#    #+#             */
/*   Updated: 2017/11/10 16:12:21 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static int	ft_checker(t_stack **a, t_stack **b, char *instruction)
{
	if (ft_strcmp(instruction, "sa") == 0)
		ft_swap((*a));
	else if (ft_strcmp(instruction, "sb") == 0)
		ft_swap((*b));
	else if (ft_strcmp(instruction, "ss") == 0)
		ft_ss((*a), (*b));
	else if (ft_strcmp(instruction, "pb") == 0)
		ft_push(b, a);
	else if (ft_strcmp(instruction, "pa") == 0)
		ft_push(a, b);
	else if (ft_strcmp(instruction, "ra") == 0)
		ft_rotate(a);
	else if (ft_strcmp(instruction, "rb") == 0)
		ft_rotate(b);
	else if (ft_strcmp(instruction, "rr") == 0)
		ft_rr(a, b);
	else if (ft_strcmp(instruction, "rra") == 0)
		ft_revrotate(a);
	else if (ft_strcmp(instruction, "rrb") == 0)
		ft_revrotate(b);
	else if (ft_strcmp(instruction, "rrr") == 0)
		ft_rrr(a, b);
	else
		return (-1);
	return (1);
}

static int	ft_status(t_stack **a, t_stack **b)
{
	if (ft_asort((*a)) == 1 && !(*b))
	{
		write(1, "OK\n", 3);
		return (0);
	}
	else if (!ft_asort((*a)) || (*b))
	{
		write(1, "KO\n", 3);
		return (-1);
	}
	return (0);
}

int			main(int ac, char **av)
{
	t_stack	*a_stack;
	t_stack	*b_stack;
	char	*instruction;

	if (ac > 1)
	{
		a_stack = ft_getstack();
		a_stack->next = NULL;
		b_stack = NULL;
		if (ft_store(a_stack, av, ac) == -1 || ft_errhandler(av, a_stack) == 1)
			return (-1);
		while (1)
		{
			if ((get_next_line(0, &instruction)) == 0)
				return (ft_status(&a_stack, &b_stack));
			if ((ft_checker(&a_stack, &b_stack, instruction)) < 0)
			{
				write(1, "ERROR\n", 6);
				return (-1);
			}
			ft_printer(a_stack, b_stack);
		}
	}
	return (0);
}
