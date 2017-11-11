/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 14:33:45 by ssibiya           #+#    #+#             */
/*   Updated: 2017/06/11 15:44:35 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		num = num * (-1);
		ft_putchar_fd('-', fd);
	}
	if (num > 9)
	{
		ft_putnbr_fd((int)(num / 10), fd);
		ft_putnbr_fd((int)(num % 10), fd);
	}
	else
	{
		num = num + 48;
		ft_putchar_fd(num, fd);
	}
}
