/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 11:35:23 by ssibiya           #+#    #+#             */
/*   Updated: 2017/07/27 11:36:42 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)ft_memalloc(sizeof(t_list));
	if (new == 0)
		return (0);
	if (content == 0)
	{
		content_size = 0;
		new->content = 0;
	}
	else
	{
		new->content = ft_memalloc(content_size);
		if (new->content == 0)
		{
			ft_memdel((void **)&new);
			return (0);
		}
		ft_memcpy(new->content, content, content_size);
	}
	new->content_size = content_size;
	new->next = 0;
	return (new);
}
