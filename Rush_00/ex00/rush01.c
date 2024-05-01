/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadnane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:52:43 by abadnane          #+#    #+#             */
/*   Updated: 2023/08/20 19:26:09 by abadnane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_error(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
	str++;
	}
}

void	rush_line1(int a, int x, int c)
{
	if (a == 1 && c == 1)
		ft_putchar('/');
	else if (a == 1 && c == x)
		ft_putchar('\\');
	else if (c != 1 && c != x)
		ft_putchar('*');
}

void	rush_line3(int a, int y, int x, int c)
{
	if (a == y && c == 1)
		ft_putchar('\\');
	else if (a == y && c == x)
		ft_putchar('/');
	else if (c != 1 && c != x)
		ft_putchar('*');
}

void	rush_line2(int c, int x)
{
	if (c == 1 || c == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	a;
	int	c;

	a = 1;
	c = 1;
	if (x > 0 && y > 0)
	{
		while (a <= y)
		{
			while (c <= x)
			{
				if (a == 1)
					rush_line1(a, x, c);
				else if (a == y)
					rush_line3(a, y, x, c);
				else
					rush_line2(c, x);
			c++;
			}
		c = 1;
			ft_putchar('\n');
		a++;
		}
	}
}
