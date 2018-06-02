/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 09:20:36 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/02 11:53:49 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *str;

	i = 0;
	if (!s)
		return (NULL);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	if (s)
		while (i < len && s[start] != '\0')
		{
			str[i] = s[start + 1];
			i++;
		}
	str[i] = '\0';
	return (str);
}