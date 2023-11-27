/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:18:34 by mdouiri           #+#    #+#             */
/*   Updated: 2021/12/04 20:05:04 by mdouiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tes;
	int		len;
	int		i;

	if (!lst || !f)
		return ;
	len = ft_lstsize(lst);
	i = 0;
	tes = NULL;
	while ((i != len) && lst)
	{
		tes = lst->next;
		f((lst)->content);
		lst = tes;
	}
}
