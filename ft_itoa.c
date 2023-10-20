/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhavlick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:07:15 by jhavlick          #+#    #+#             */
/*   Updated: 2023/10/20 12:07:56 by jhavlick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	m;

	len = ft_numlen(n);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	m = n;
	if (m < 0)
	{
		str[0] = '-';
		m *= -1;
	}
	str[len] = '\0';
	len--;
	if (m == 0)
		str[0] = '0';
	while (m)
	{
		str[len] = m % 10 + '0';
		m /= 10;
		len--;
	}
	return (str);
}
