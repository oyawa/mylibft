/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 09:14:42 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/01 09:20:19 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ret;
	char *fill;
	size_t i;

	ret = (void *)malloc(size);
	if (!ret)
		return (NULL);
	fill = ret;
	i = 0;
	while (i < size)
	{
		*fill++ = 0;
		i++;
	}
	return (ret);
}
