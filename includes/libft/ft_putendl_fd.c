/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 11:46:06 by ssibiya           #+#    #+#             */
/*   Updated: 2017/08/07 11:46:10 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(const char *s, int fd)
{
	char	*str;

	str = (char *)s;
	if (str != NULL || fd)
	{
		ft_putstr_fd(str, fd);
		ft_putchar_fd('\n', fd);
	}
}
