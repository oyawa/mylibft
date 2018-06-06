/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 09:31:38 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/06 14:17:03 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	if (!(mem = malloc(sizeof(*mem) * (size + 1))))
		return (NULL);
	if (mem)
	{
		while (i <= size)
		{
			mem[i] = '\0';
			i++;
		}
	}
	return (mem);
}
