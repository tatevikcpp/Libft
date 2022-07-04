/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhechoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:47:32 by tkhechoy          #+#    #+#             */
/*   Updated: 2022/04/20 17:33:13 by tkhechoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!hay || !need)
		return (NULL);
	if (ft_strlen(need) == 0)
		return ((char *)hay);
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] == need[j] && hay[i + j] && need[j] && i + j < len)
			j++;
		if (!need[j])
			return ((char *)&hay[i]);
		i++;
	}
	return (NULL);
}
