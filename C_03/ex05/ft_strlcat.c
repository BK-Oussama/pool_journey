/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:43:45 by ouboukou          #+#    #+#             */
/*   Updated: 2023/08/28 12:26:22 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	j;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	j = ft_strlen(dest);
	if (dest_length >= size || size == 0)
		return (size + src_length);
	i = 0;
	while (i < (size - j - 1) && src[i] != '\0')
	{
		dest[dest_length] = src[i];
		i++;
		dest_length++;
	}
	dest[dest_length] = '\0';
	return (j + src_length);
}
