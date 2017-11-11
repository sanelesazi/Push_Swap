/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 12:20:13 by ssibiya           #+#    #+#             */
/*   Updated: 2017/08/04 12:32:21 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int		i;
	int		ind;
	char	*src;

	src = (char *)s2;
	ind = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	if (src[ind])
	{
		while (src[ind])
		{
			s1[i] = src[ind];
			ind++;
			i++;
		}
		s1[i] = '\0';
		return (s1);
	}
	else
		return (s1);
	return (NULL);
}
