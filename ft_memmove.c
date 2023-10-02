/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhavlick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:57:53 by jhavlick          #+#    #+#             */
/*   Updated: 2023/10/02 10:53:07 by jhavlick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dest || !src)
	{
		return (NULL);
	}
	d = (char *) dest;
	s = (const char *) src;
	if (dest <= src)
	{
		return (ft_memcpy(dest, src, n));
	}
	s += n;
	d += n;
	while (n > 0)
	{
		*(--d) = *(--s);
		n--;
	}
	return (dest);
}
