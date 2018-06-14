/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 11:55:45 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/14 15:57:06 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str1;
	size_t	str2;
	char	*s;

	str1 = 0;
	str2 = 0;
	if (!s1 || !s2)
		return (NULL);
	s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	while (s1[str1] != '\0')
	{
		s[str1] = s1[str1];
		str1++;
	}
	while (s2[str2] != '\0')
	{
		s[str1 + str2] = s2[str2];
		str2++;
	}
	s[str1 + str2] = '\0';
	return (s);
}
