/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 14:52:14 by ssibiya           #+#    #+#             */
/*   Updated: 2017/08/04 14:09:23 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*r;
	unsigned char		*s;
	int					i;

	r = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		r[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (r + i + 1);
		n--;
		i++;
	}
	return (NULL);
}
