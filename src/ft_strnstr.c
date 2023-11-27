/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:26:45 by mdouiri           #+#    #+#             */
/*   Updated: 2021/12/01 13:46:28 by mdouiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*bigi;
	char	*littli;

	bigi = (char *)big;
	littli = (char *)little;
	i = 0;
	if (littli[0] == '\0')
		return ((char *)bigi);
	while (bigi[i] && i < len)
	{
		j = 0;
		while (bigi[i + j] == littli[j] && (i + j) < len)
		{
			if (littli[j + 1] == '\0')
				return (&((char *)bigi)[i]);
			j++;
		}
		i++;
	}
	return (0);
}
