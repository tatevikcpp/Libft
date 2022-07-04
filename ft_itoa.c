/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhechoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:25:08 by tkhechoy          #+#    #+#             */
/*   Updated: 2022/04/21 17:55:06 by tkhechoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	count(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		n = -n;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static int	power(int n)
{
	int	div;

	div = 1;
	while (n > 0)
	{
		div *= 10;
		n--;
	}
	return (div);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	int		i;
	int		div;
	char	*str;

	str = (char *)malloc((count(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	div = power(count(n) - 1);
	i = 0;
	if (n == 0)
		return (ft_strcpy(str, "0"));
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	while (div > 0)
	{
		str[i++] = (n / div % 10 + 48);
		div /= 10;
	}
	str[i] = '\0';
	return (str);
}
