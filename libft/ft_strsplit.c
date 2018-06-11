/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 15:52:50 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/11 11:09:20 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cntwords(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char			**new;
	unsigned int	i;
	size_t			k;
	size_t			t;

	i = 0;
	t = 0;
	if (s == NULL)
		return (NULL);
	if (!(new = (char **)ft_memalloc(sizeof(char*) * (ft_cntwords(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if ((s[i] != c))
		{
			k = 0;
			while (s[i + k] != c && s[i + k])
				k++;
			if (!(new[t++] = ft_strsub(s, i, k)))
				return (NULL);
			i += k - 1;
		}
		i++;
	}
	return (new);
}
