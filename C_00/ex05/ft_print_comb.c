/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:53:34 by ouboukou          #+#    #+#             */
/*   Updated: 2023/08/18 00:41:47 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_dig(int a1, int b1, int c1)
{
	ft_putchar(a1 + '0');
	ft_putchar(b1 + '0');
	ft_putchar(c1 + '0');
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				{
					ft_put_dig(a, b, c);
					if (a != 7)
						write(1, ", ", 2);
				}
			c++;
			}
		b++;
		}
	a++;
	}
}
