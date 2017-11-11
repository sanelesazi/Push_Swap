/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 14:55:53 by ssibiya           #+#    #+#             */
/*   Updated: 2017/06/10 14:58:03 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*new;
	char	*temp;
	int		i;

	if (!s)
		return (NULL);
	temp = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!temp)
		return (NULL);
	i = 0;
	while (s[i])
	{
		temp[i] = f(s[i]);
		i++;
	}
	temp[i] = '\0';
	new = ft_strdup(temp);
	free(temp);
	return (new);
}
