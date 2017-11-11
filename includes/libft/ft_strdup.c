/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 10:07:49 by ssibiya           #+#    #+#             */
/*   Updated: 2017/06/11 14:51:03 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;

	dup = (char *)malloc((sizeof(*dup) * (ft_strlen(s1))) + 1);
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, s1);
	return (dup);
}
