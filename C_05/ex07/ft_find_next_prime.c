/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 00:15:25 by ouboukou          #+#    #+#             */
/*   Updated: 2023/09/03 15:12:30 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
	i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	np;

	np = nb;
	if (nb < 2)
	{
		return (2);
	}
	while (!ft_is_prime(np))
	{
		np++;
	}
	return (np);
}
