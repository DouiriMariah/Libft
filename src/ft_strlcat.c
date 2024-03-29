/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:11:34 by mdouiri           #+#    #+#             */
/*   Updated: 2021/11/29 15:48:47 by mdouiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (src[k])
		k++;
	while (dst[i] && i < size)
		i++;
	if (i == size)
		return (size + k);
	while (size && src[j] && (i + j) < (size - 1))
	{
		dst[i + j] = src[j];
		j++;
	}	
	if (i + j < size)
		dst[i + j] = '\0';
	return (k + i);
}
