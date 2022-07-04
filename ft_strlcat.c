/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhechoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:56:53 by tkhechoy          #+#    #+#             */
/*   Updated: 2022/04/20 17:39:18 by tkhechoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	if (!dest || !src)
		return (0);
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	j = d_len;
	i = 0;
	if (d_len < size - 1 && size > 0)
	{
		while (src[i] != '\0' && d_len + i < size - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	if (d_len >= size)
		d_len = size;
	return (d_len + s_len);
}
