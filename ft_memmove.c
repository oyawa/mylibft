/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 12:15:07 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/01 14:38:44 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmp1;
	unsigned char *tmp2;

	tmp1 = dst;
	tmp2 = (unsigned char *)src;
	if (dst < src)
	{
		return (ft_memcpy(dst, src, len));
	}
	if (dst > src)
		while(len--)
			tmp1[len] = tmp2[len];
		return (dst);
}
