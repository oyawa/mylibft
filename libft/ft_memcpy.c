/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:18:36 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/06 11:20:45 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s1;
	char	*s2;
	int		i;

	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	s1 = (char *)dst;
	s2 = (char *)src;
	while (n > 0)
	{
		s1[i] = s2[i];
		i++;
		n--;
	}
	*s1 = *s2;
	return (s1);
}
