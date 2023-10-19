/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhavlick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:50:54 by jhavlick          #+#    #+#             */
/*   Updated: 2023/10/17 16:11:19 by jhavlick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	s;
	void	*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	s = count * size;
	p = malloc(s);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_bzero(p, s);
	}
	return (p);
}
