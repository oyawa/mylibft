/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 10:23:19 by oyawa             #+#    #+#             */
/*   Updated: 2018/06/02 10:35:37 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *str;
	
	str = (char *)malloc(sizeof (char) * (ft_strlen(s)) + 1);
	if (str == NULL)
			return NULL;
		i = 0;

	if (s && f)
		while (s[i] != '\0')
		{
			str[i] = f(i, s[i]);
			i++;
		}
	str[i] = '\0';
	return (str);
}
