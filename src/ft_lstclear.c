/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:45:46 by mdouiri           #+#    #+#             */
/*   Updated: 2021/12/04 20:11:17 by mdouiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tes;
	t_list	*bon;

	if (!(*lst) || !del)
		return ;
	bon = *lst;
	tes = NULL;
	while (bon != NULL)
	{
		tes = bon->next;
		del(bon->content);
		free((bon));
		bon = tes;
	}
	*lst = NULL;
}
