/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 16:15:35 by ssibiya           #+#    #+#             */
/*   Updated: 2017/06/10 14:57:48 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*t;
	char	*new;
	int		index;

	if (!s)
		return (NULL);
	t = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!t)
		return (NULL);
	else
	{
		index = 0;
		while (s[index])
		{
			t[index] = f(index, s[index]);
			index++;
		}
		t[index] = '\0';
		new = ft_strdup(t);
		free(t);
		return (new);
	}
}
