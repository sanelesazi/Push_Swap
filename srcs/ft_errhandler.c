/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errhandler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 15:13:42 by ssibiya           #+#    #+#             */
/*   Updated: 2017/11/10 14:05:03 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static int	ft_checkdup(t_stack *a)
{
	t_stack	*copy_a;
	t_stack	*checker_node;

	copy_a = a;
	while (copy_a != NULL)
	{
		checker_node = copy_a->next;
		while (checker_node != NULL)
		{
			if (checker_node->data == copy_a->data)
				return (1);
			checker_node = checker_node->next;
		}
		copy_a = copy_a->next;
	}
	return (0);
}

static int	ft_checkalph(char **av)
{
	int		i;
	int		j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (ft_isalpha(av[i][j]) == 1)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int			ft_errhandler(char **av, t_stack *a)
{
	if (ft_checkdup(a) == 1 || ft_checkalph(av) == 1)
	{
		write(1, "ERROR\n", 6);
		return (1);
	}
	return (0);
}
