/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:14:41 by mdouiri           #+#    #+#             */
/*   Updated: 2021/12/04 21:15:05 by mdouiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	v;

	v = 0;
	if (!s)
		return (0);
	if (!len || start > ft_strlen(s))
	{
		res = malloc(1 * sizeof(char));
		res[0] = '\0';
		return (res);
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	while (s[start] && v < len)
	{
		res[v] = s[start];
		v++;
		start++;
	}
	res[v] = '\0';
	return (res);
}
