/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 08:50:36 by ssibiya           #+#    #+#             */
/*   Updated: 2017/08/14 14:49:21 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t		i;
	size_t		ind;
	char		*lit;
	char		*bi;

	lit = (char *)little;
	bi = (char *)big;
	if (ft_strcmp(lit, "") == 0 && ft_strcmp(bi, "") == 0)
		return (bi);
	if (ft_strcmp(lit, "") == 0)
		return (bi);
	i = 0;
	while (bi[i])
	{
		ind = 0;
		while (lit[ind] == bi[i + ind])
		{
			if (ind + 1 == ft_strlen(lit))
				return (&bi[i]);
			ind++;
		}
		i++;
	}
	return (NULL);
}
