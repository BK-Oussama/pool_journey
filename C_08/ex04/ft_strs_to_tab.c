/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:51:52 by ouboukou          #+#    #+#             */
/*   Updated: 2023/09/07 17:02:33 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_stock_str.h"
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_str_and_size(char **av, t_stock_str *stu, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		stu[i].size = ft_strlen(av[i]);
		stu[i].str = av[i];
		i++;
	}
	stu[i].str = 0;
}

void	ft_copy(t_stock_str *stu, char **av, int index)
{
	int	j;

	j = 0;
	while (av[index][j])
	{
		stu[index].copy[j] = av[index][j];
		j++;
	}
	stu[index].copy[j] = '\0';
}

void	ft_free_copy(t_stock_str *info, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(info[i].copy);
		i++;
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*info;
	int			i;

	i = 0;
	info = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!info)
		return (0);
	ft_str_and_size(av, info, ac);
	while (i < ac)
	{
		info[i].copy = malloc(ft_strlen(av[i]) + 1);
		if (!info[i].copy)
		{
			ft_free_copy(info, ac);
			return (0);
		}
		ft_copy(info, av, i);
		i++;
	}
	return (info);
}
