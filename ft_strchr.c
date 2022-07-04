/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhechoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:19:59 by tkhechoy          #+#    #+#             */
/*   Updated: 2022/04/22 15:11:05 by tkhechoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (!c)
		return ((char *)str + ft_strlen(str));
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		else if (!*str++)
			return (0);
	}
	return (0);
}
