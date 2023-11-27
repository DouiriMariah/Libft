/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:59:34 by mdouiri           #+#    #+#             */
/*   Updated: 2021/11/30 14:45:42 by mdouiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	while (src[i])
		i++;
	if (size != 0)
	{
		while (src[y] && y < (size - 1))
		{
			dst[y] = src[y];
			y++;
		}
		dst[y] = '\0';
		return (i);
	}
	else
		return (i);
}
