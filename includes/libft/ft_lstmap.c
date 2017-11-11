/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 15:03:11 by ssibiya           #+#    #+#             */
/*   Updated: 2017/08/03 15:12:34 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ret;
	t_list *ret_last;

	if (!f || !lst)
		return (0);
	ret_last = f(lst);
	ret = ret_last;
	if (!ret)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		ret_last->next = f(lst);
		if (ret_last->next == 0)
			return (0);
		ret_last = ret_last->next;
	}
	return (ret);
}
