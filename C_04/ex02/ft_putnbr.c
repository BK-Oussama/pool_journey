/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:08:17 by ouboukou          #+#    #+#             */
/*   Updated: 2023/08/29 11:56:26 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	d;

	d = nb;
	if (d < 0)
	{
		ft_putchar('-');
		d = -d;
	}
	if (d >= 10)
	{
		ft_putnbr(d / 10);
		ft_putnbr(d % 10);
	}
	else
		ft_putchar(d + '0');
}
