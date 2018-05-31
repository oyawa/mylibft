/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:37:06 by oyawa             #+#    #+#             */
/*   Updated: 2018/05/30 11:23:29 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = len;
	while (i != len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		j--;
	}
	while (j != 0)
	{
		dst[i] = '\0';
		i++;
		j--;
	}
	return (dst);
}
