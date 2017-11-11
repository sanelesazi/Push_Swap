/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 11:46:48 by ssibiya           #+#    #+#             */
/*   Updated: 2017/08/07 11:46:49 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		num = num * (-1);
		ft_putchar('-');
	}
	if (num > 9)
	{
		ft_putnbr((int)(num / 10));
		ft_putnbr((int)(num % 10));
	}
	else
	{
		num = num + 48;
		ft_putchar(num);
	}
}
