/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_store.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 17:12:37 by ssibiya           #+#    #+#             */
/*   Updated: 2017/11/10 13:44:48 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static int		ft_loop_every_elem(t_stack **a, char **av, int i)
{
	while (av[++i])
	{
		(*a)->data = ft_atoi(av[i]);
		if (ft_strcmp(ft_itoa((*a)->data), av[i]))
		{
			write(1, "ERROR\n", 6);
			return (-1);
		}
		if (av[i + 1])
		{
			(*a)->next = ft_getstack();
			(*a)->next->prev = (*a);
			(*a) = (*a)->next;
		}
		else
			(*a)->next = NULL;
	}
	return (0);
}

int				ft_store(t_stack *a_stack, char **av, int ac)
{
	int		i;
	t_stack	*head;
	char	**numbers;

	head = a_stack;
	if (ac == 2)
	{
		if (ft_strlen(av[1]))
		{
			numbers = ft_strsplit(av[1], ' ');
			av = numbers;
			i = -1;
		}
		else
			return (-1);
	}
	if (ac > 2)
		i = 0;
	if (ft_loop_every_elem(&a_stack, av, i) == -1)
		return (-1);
	a_stack = head;
	return (1);
}
