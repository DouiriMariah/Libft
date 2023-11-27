/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:58:21 by mdouiri           #+#    #+#             */
/*   Updated: 2021/12/04 21:20:24 by mdouiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

static int	ft_charset(char charset, char a)
{
	if (charset == a)
		return (1);
	else
		return (0);
}

static int	ft_word(char sep, char *str)
{
	int	i;
	int	wd;

	i = 0;
	wd = 0;
	while (ft_charset(sep, str[i]) == 1 && str[i])
		i++;
	while (str[i])
	{
		wd++;
		while (ft_charset(sep, str[i]) == 0 && str[i])
			i++;
		while (ft_charset(sep, str[i]) == 1 && str[i])
			i++;
	}
	return (wd);
}

static char	*ft_strdupi(const char *str, char sep)
{
	int		i;
	int		v;
	char	*res;

	i = 0;
	v = 0;
	while (str[i] && ft_charset(sep, str[i]) == 0)
		i++;
	res = (char *)malloc((i + 1) * sizeof (char));
	i = 0;
	if (!res)
		return (0);
	while (ft_charset(sep, str[i]) == 1 && str[i])
		i++;
	while (ft_charset(sep, str[i]) == 0 && str[i])
	{
		res[v] = str[i];
		i++;
		v++;
	}
	res[v] = '\0';
	return (res);
}

char	**ft_split(char	const *s, char c)
{
	int		i;
	int		v;
	char	**split;

	if (!s)
		return (0);
	split = (char **)malloc((ft_word(c, ((char *)s)) + 1) * sizeof(char *));
	if (!split)
		return (0);
	v = -1;
	i = 0;
	while (ft_charset(c, s[i]) == 1 && s[i])
		i++;
	while (s[i])
	{
		split[++v] = ft_strdupi(&s[i], c);
		if (!split[v])
			return (0);
		while (ft_charset(c, s[i]) == 0 && s[i])
			i++;
		while (ft_charset(c, s[i]) == 1 && s[i])
			i++;
	}
	split[ft_word(c, ((char *)s))] = 0;
	return (split);
}
