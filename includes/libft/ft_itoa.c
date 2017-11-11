/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 15:26:28 by ssibiya           #+#    #+#             */
/*   Updated: 2017/07/27 13:12:08 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*get_str(char *ptr)
{
	int		i;
	char	*str;

	i = 0;
	while (ptr[i] != '\0')
		i++;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (0);
	i = 0;
	while (ptr[i] != 0)
	{
		str[i] = ptr[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char			*ft_itoa(int value)
{
	char		buf[50];
	char		*ptr;
	long int	num;
	int			minus;

	minus = 0;
	ptr = &buf[49];
	*ptr = '\0';
	num = value;
	if (value < 0)
	{
		num *= -1;
		minus = 1;
	}
	if (num == 0)
		*--ptr = '0';
	while (num != 0)
	{
		*--ptr = "0123456789ABCDEF"[num % 10];
		num /= 10;
	}
	if (minus == 1)
		*--ptr = '-';
	return (get_str(ptr));
}
