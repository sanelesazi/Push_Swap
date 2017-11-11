/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 10:51:13 by ssibiya           #+#    #+#             */
/*   Updated: 2017/09/24 12:10:12 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_charadd(char *src, int i)
{
	char		*strnew;
	int			ind;

	strnew = (char *)malloc(sizeof(char) * i + 1);
	if (!strnew)
		return (0);
	ind = -1;
	while (++ind < i)
		strnew[ind] = src[ind];
	free(src);
	return (strnew);
}

void		ft_readfile(int fd, char *buff, int *rd, int *i)
{
	*rd = read(fd, buff, BUFF_SIZE);
	buff[*rd] = '\0';
	*i = 0;
}

static char	*ft_readln(int fd, int *rd, int *i)
{
	static char	buff[BUFF_SIZE + 1];
	char		*str;
	char		*temp;
	int			j;

	temp = NULL;
	str = (char *)malloc(sizeof(char) * 1);
	if (!str)
		return (0);
	j = 0;
	if (*i == 0 || buff[*i] == '\0')
		ft_readfile(fd, buff, &(*rd), &(*i));
	while (buff[*i] != '\n' && buff[*i] && *rd > 0)
	{
		str = ft_charadd(str, j);
		str[j++] = buff[(*i)++];
		if (buff[*i] == '\0')
			ft_readfile(fd, buff, &(*rd), &(*i));
	}
	if (buff[*i] == '\n' || *rd == 0)
	{
		str[j] = '\0';
		if (*rd > 0)
			(*i)++;
		temp = str;
		free(str);
		return (temp);
	}
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	static int	rd = 0;
	static int	i = 0;

	if (fd < 0 || line == 0 || fd == 42 || BUFF_SIZE < 1)
		return (-1);
	*line = ft_readln(fd, &rd, &i);
	if (*line || rd > 0)
	{
		if (*line[0] != 0 || rd > 0)
			return (1);
	}
	else if (rd < 0)
		return (-1);
	return (0);
}
