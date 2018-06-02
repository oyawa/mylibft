/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:36:49 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/02 12:51:16 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *sourc;
	char *dest;
	size_t i;

	i  = 0;
	dest =  (char *)dst;
	sourc = (char *)src;
	while (i < n && sourc[i] != (char)c)
	{
		dest[i] = sourc[i];
		i++;
	}
	if (i > 0 && sourc[i] == (char)c || '\0')
	{
		dest[i]  = sourc[i];
		return (dest + i + 1);
	}
	return (NULL);
}
