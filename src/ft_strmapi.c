/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:10:46 by mdouiri           #+#    #+#             */
/*   Updated: 2021/12/04 20:14:38 by mdouiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

static int	ft_strleni(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char ))
{
	unsigned int		i;
	unsigned int		len;
	char				*res;

	if (!s || !f)
		return (0);
	len = ft_strleni(((char *)s));
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	i = 0;
	while ((char)s[i])
	{
		res[i] = (*f)(i, (char)s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
