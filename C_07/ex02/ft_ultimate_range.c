/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:51:22 by ouboukou          #+#    #+#             */
/*   Updated: 2023/09/06 03:07:07 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	s;
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	s = max - min;
	tab = malloc(s * sizeof(int));
	if (tab == NULL)
	{
		return (-1);
	}
	while (i < s)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (s);
}
