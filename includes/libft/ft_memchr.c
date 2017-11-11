/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 09:59:27 by ssibiya           #+#    #+#             */
/*   Updated: 2017/07/31 12:01:21 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	a;
	int		i;

	a = (unsigned char)c;
	str = (char *)s;
	i = 0;
	while (n != 0)
	{
		if (*str == a)
			return (str);
		n--;
		str++;
	}
	return (NULL);
}
