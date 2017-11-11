/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 10:01:45 by ssibiya           #+#    #+#             */
/*   Updated: 2017/08/04 12:42:15 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	while (n > 0)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (0);
		n--;
	}
	if (n == 0)
		return (1);
	else
		return (0);
	return (0);
}
