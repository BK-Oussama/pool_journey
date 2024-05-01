/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:00:37 by ouboukou          #+#    #+#             */
/*   Updated: 2023/09/06 03:06:35 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	s;
	int	*rang;
	int	i;

	i = 0;
	s = max - min;
	if (min >= max)
		return (0);
	rang = malloc(s * sizeof(int));
	if (rang == NULL)
	{
		return (0);
	}
	while (i < s)
	{
		rang[i] = min + i;
		i++;
	}
	return (rang);
}
