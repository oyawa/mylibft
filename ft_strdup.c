/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 11:28:44 by oyawa             #+#    #+#             */
/*   Updated: 2018/05/31 12:13:59 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *ret;
	char len;

	len = ft_strlen(s1);
	if (!(ret = (char *)malloc(len + 1)))
		return (NULL);
	else
		ft_strcpy(ret, s1);
	return ((char *)ret);
}
