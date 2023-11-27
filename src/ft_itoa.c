/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:20:11 by mdouiri           #+#    #+#             */
/*   Updated: 2021/12/04 20:16:29 by mdouiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

static int	ft_count(long int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		count++;
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

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

static char	*strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = ft_strleni(str) - 1;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

static void	ft_continu(char *res, long int nb, int sign)
{
	int	v;

	v = 0;
	if (nb == 0)
	{
		res[v] = 0 + 48;
		v++;
	}
	while (nb != 0)
	{
		res[v++] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (sign == 1)
		res[v++] = '-';
	res[v] = '\0';
}

char	*ft_itoa(int n)
{
	char			*res;
	int				sign;
	long int		nb;

	nb = n;
	sign = 0;
	if (nb < 0)
	{
		nb = -nb;
		sign++;
	}
	res = malloc((ft_count(nb) + sign + 1) * sizeof(char));
	if (!res)
		return (0);
	ft_continu(res, nb, sign);
	strrev(res);
	return (res);
}
