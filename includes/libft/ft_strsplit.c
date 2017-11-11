/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 13:40:34 by ssibiya           #+#    #+#             */
/*   Updated: 2017/08/04 13:00:52 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_words(const char *s, char c)
{
	int	i;
	int	word;

	word = 0;
	i = 0;
	while (*s != '\0')
	{
		if (word == 1 && *s == c)
			word = 0;
		if (word == 0 && *s != c)
		{
			word = 1;
			i++;
		}
		s++;
	}
	return (i);
}

static int		ft_ccount(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s != c && *s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**sp;
	int		i;
	int		words;

	if (s == NULL)
		return (NULL);
	words = ft_words(s, c);
	sp = (char **)malloc(sizeof(sp) * (words + 1));
	if (sp == NULL)
		return (NULL);
	sp[words] = 0;
	i = 0;
	while (words > 0)
	{
		while (*s == c)
			s++;
		sp[i] = ft_strsub(s, 0, (size_t)ft_ccount(s, c));
		if (sp[i] == NULL)
			return (NULL);
		s += ft_ccount(s, c);
		i++;
		words--;
	}
	return (sp);
}
