/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:06:25 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/05 15:39:47 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	int i;
	int j;
	int k;
	char *dst;

	if (!s)
		return (NULL);
	i = 0;
	j = (int)ft_strlen(s) - 1 ;

	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while ((s[j] == ' ' || s[i] == '\n' || s[i] == '\t') && (i < j))
		j--;
//	dst = ft_strnew(j - i);
	if (!(dst = (char *)malloc(sizeof(char) * ( j - i + 1))))
		return (NULL);
	k = 0;
	while (i <= j)
	{
		dst[k++] = s[i++];
	}
	dst[k] = '\0';
	return (dst);
}
