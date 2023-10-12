/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhavlick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:21:12 by jhavlick          #+#    #+#             */
/*   Updated: 2023/10/12 17:46:23 by jhavlick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
	{
		return ((char *)s + 1);
	}
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)s + 1);
		}
		i--;
	}
	return (0);
}
