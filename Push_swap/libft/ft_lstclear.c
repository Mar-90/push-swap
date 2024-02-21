/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:32:03 by maalamer          #+#    #+#             */
/*   Updated: 2023/07/19 14:25:08 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elemt;

	if (lst)
	{
		while (*lst)
		{
			elemt = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = elemt;
		}
	}
	return ;
}
