/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhavlick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:11:41 by jhavlick          #+#    #+#             */
/*   Updated: 2023/09/27 16:59:22 by jhavlick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dst && !src)
	{
		return (NULL);
	}
	d = (char *)dst;
	s = (char *)src;
	while (n > 0)
	{
		*(d++) = *(s++);
		n--;
	}
	return (dst);
}
