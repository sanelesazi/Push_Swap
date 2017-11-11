/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 11:46:23 by ssibiya           #+#    #+#             */
/*   Updated: 2017/08/07 11:46:24 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *str)
{
	int		i;
	char	*s;

	if (!str)
		return ;
	s = (char *)str;
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
