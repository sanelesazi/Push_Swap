/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 10:00:06 by ssibiya           #+#    #+#             */
/*   Updated: 2017/08/04 14:08:07 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;

	if (*lit == '\0')
		return ((char *)big);
	i = ft_strlen(lit);
	while (*big && len-- >= i)
	{
		if (*big == *lit && ft_memcmp((char *)big, (char *)lit, i) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
