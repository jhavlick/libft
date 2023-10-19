/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhavlick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:58:06 by jhavlick          #+#    #+#             */
/*   Updated: 2023/10/19 18:01:00 by jhavlick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	if (s1 == NULL || set == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (j > i && ft_strchr(set, s1[j]))
	{
		j--;
	}
	return (ft_substr(s1, i, ft_strlen(s1) - i));
}
