/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:16:20 by mdouiri           #+#    #+#             */
/*   Updated: 2021/12/04 21:16:10 by mdouiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

static int	ft_strleni(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		v;

	if (!s1 || !s2)
		return (0);
	res = malloc((ft_strleni(s1) + ft_strleni(s2) + 1) * sizeof(char));
	if (!res)
		return (0);
	i = 0;
	v = 0;
	while (s1[i])
	{
		res[v] = s1[i];
		i++;
		v++;
	}
	i = 0;
	while (s2[i])
	{
		res[v++] = s2[i++];
	}
	res[v] = '\0';
	return (res);
}
