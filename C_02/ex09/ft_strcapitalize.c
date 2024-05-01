/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:11:57 by ouboukou          #+#    #+#             */
/*   Updated: 2023/08/22 21:40:21 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
			str[j] = str[j] + 32;
		j++;
	}
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[i] - 32;
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9')))
			if (str[i + 1] >= 'a' && str[i +1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
	i++;
	}
	return (str);
}
