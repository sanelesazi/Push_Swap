/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 15:57:18 by ssibiya           #+#    #+#             */
/*   Updated: 2017/08/04 12:33:22 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char	*str;
	int		i;
	int		ind;

	str = (char *)s2;
	ind = 0;
	i = 0;
	while (s1[i])
		i++;
	if (str[ind])
	{
		while (ind < (int)n && str[ind] != '\0')
		{
			s1[i] = str[ind];
			i++;
			ind++;
		}
		s1[i] = '\0';
		return (s1);
	}
	else
		return (s1);
	return (NULL);
}
