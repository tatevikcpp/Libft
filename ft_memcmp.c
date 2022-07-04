/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhechoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:08:56 by tkhechoy          #+#    #+#             */
/*   Updated: 2022/04/20 19:28:16 by tkhechoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str_1, const void *str_2, size_t n)
{
	size_t	i;

	i = 0;
	if (!str_1 || !str_2)
		return (0);
	while (i < n)
	{
		if (*(unsigned char *)(str_1 + i) != *(unsigned char *)(str_2 + i))
			return (*(unsigned char *)(str_1 + i)
				- *(unsigned char *)(str_2 + i));
		i++;
	}
	return (0);
}
