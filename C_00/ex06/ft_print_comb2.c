/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:28:59 by ouboukou          #+#    #+#             */
/*   Updated: 2023/08/17 22:53:22 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	d1;
	int	d2;

	d1 = 0;
	while (d1 <= 98)
	{
		d2 = d1 + 1;
		while (d2 <= 99)
		{
			ft_putchar((d1 / 10) + '0');
			ft_putchar((d1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((d2 / 10) + '0');
			ft_putchar((d2 % 10) + '0');
			if (d1 != 98)
			{
				write(1, ", ", 2);
			}
		d2++;
		}
	d1++;
	}
}
