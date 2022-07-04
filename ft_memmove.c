/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhechoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 19:08:43 by tkhechoy          #+#    #+#             */
/*   Updated: 2022/04/22 15:43:02 by tkhechoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	unsigned const char	*src1;

	dest1 = dest;
	src1 = src;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n--)
			*(dest1 + n) = *(src1 + n);
	}
	return (dest);
}
