/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 12:15:07 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/14 15:40:51 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	tmp1 = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	i = 0;
	if (src < dst)
	{
		while (len--)
			tmp1[len] = tmp2[len];
	}
	else
		while (i < len)
		{
			tmp1[i] = tmp2[i];
			i++;
		}
	return (dst);
}
