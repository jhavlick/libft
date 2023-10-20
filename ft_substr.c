/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhavlick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:24:17 by jhavlick          #+#    #+#             */
/*   Updated: 2023/10/19 16:38:17 by jhavlick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s == NULL)
		return (0);
	j = ft_strlen((char *)s);
	if (j < start)
		len = 0;
	else if (len > j - start)
		len = j - start;
	i = 0;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	while (len--)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
