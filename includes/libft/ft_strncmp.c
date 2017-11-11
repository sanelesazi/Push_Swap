/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 11:31:37 by ssibiya           #+#    #+#             */
/*   Updated: 2017/08/04 12:36:13 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(char const *s1, char const *s2, size_t len)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	while ((str1[i] || str2[i]) && i < len)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		else if (str1[i] == str2[i])
			i++;
	}
	return (0);
}
