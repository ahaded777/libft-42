/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahaded <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:10:06 by aahaded           #+#    #+#             */
/*   Updated: 2024/11/01 11:32:07 by aahaded          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp1;
	t_list	*temp2;

	if (!lst || !del)
		return ;
	temp1 = *lst;
	while (temp1)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		del(temp2->content);
		free(temp2);
	}
	*lst = NULL;
}
