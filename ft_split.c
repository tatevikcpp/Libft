/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhechoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:39:54 by tkhechoy          #+#    #+#             */
/*   Updated: 2022/05/09 17:16:53 by tkhechoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_str(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			count++;
		i++;
	}
	if (count == 0 || str[0] != c)
		count++;
	return (count);
}

char	*word(char const *str, int start, int end)
{
	int		i;
	char	*word;

	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str || !word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *str, char c)
{
	unsigned int	i;
	int				j;
	int				index;
	char			**arr;

	arr = (char **)malloc ((count_str(str, c) + 1) * sizeof(char *));
	if (!arr || !str)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(str))
	{
		if (str[i] != c && index < 0)
			index = i;
		else if ((str[i] == c || i == ft_strlen(str)) && index >= 0)
		{
			arr[j++] = word(str, index, i);
			index = -1;
		}
		i++;
	}
	arr[j] = 0;
	return (arr);
}
