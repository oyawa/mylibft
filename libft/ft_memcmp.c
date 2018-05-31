/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:15:07 by oyawa             #+#    #+#             */
/*   Updated: 2018/05/31 09:05:08 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char *str1;
	unsigned const char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (s1 == '\0' && s2 == '\0')
		return (0);
	while (n)
	{
		if (s1 != s2)
			return (s1 - s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
