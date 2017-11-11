/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 07:44:20 by ssibiya           #+#    #+#             */
/*   Updated: 2017/06/20 07:45:44 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strccpy(char *dst, const char *src, char c, int ind)
{
	int	i;

	i = 0;
	while (src[ind] != c)
	{
		dst[i++] = src[ind++];
	}
	dst[i] = '\0';
	return (dst);
}
