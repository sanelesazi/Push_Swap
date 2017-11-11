/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 14:43:03 by ssibiya           #+#    #+#             */
/*   Updated: 2017/07/24 14:52:32 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*prev;

	prev = (*alst);
	while ((*alst) != NULL)
	{
		(*alst) = (*alst)->next;
		del(prev->content, prev->content_size);
		free(prev);
		prev = NULL;
		prev = (*alst);
	}
}
