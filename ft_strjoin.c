/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhechoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:42:48 by tkhechoy          #+#    #+#             */
/*   Updated: 2022/04/28 17:48:41 by tkhechoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str_1, char const *str_2)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (!str_1 || !str_2)
		return (NULL);
	ptr = (char *)malloc((ft_strlen(str_1)
				+ ft_strlen(str_2) + 1) * sizeof(*str_1));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (str_1[i])
	{
		ptr[j++] = str_1[i];
		i++;
	}
	i = 0;
	while (str_2[i])
	{
		ptr[j++] = str_2[i];
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}
