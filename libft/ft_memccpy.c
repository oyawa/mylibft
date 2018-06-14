/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:36:49 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/14 15:18:24 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*sourc;
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	sourc = (char *)src;
	while (i < n)
	{
		dest[i] = sourc[i];
		if (sourc[i] == (char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
