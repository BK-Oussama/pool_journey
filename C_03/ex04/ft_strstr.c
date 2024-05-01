/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:04:53 by ouboukou          #+#    #+#             */
/*   Updated: 2023/08/28 12:15:50 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j] && to_find[j] != '\0')
		{
			j++;
			i++;
			if (to_find[j] == '\0')
			{
				return (&str[i - j]);
			}
		}
		else
		{	
				j = 0;
				i++;
		}
	}
	return (0);
}
