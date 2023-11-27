/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:17:27 by mdouiri           #+#    #+#             */
/*   Updated: 2021/12/04 19:57:22 by mdouiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	len;
	int	i;

	if (!lst)
		return (NULL);
	i = 0;
	len = ft_lstsize(lst);
	while (i < len && ((lst->next) != NULL))
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
