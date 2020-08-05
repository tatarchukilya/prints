/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <nblackie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:42:34 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/11 15:11:12 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		del(t_list *lst)
{
	t_list *temp;

	while (lst)
	{
		temp = lst;
		lst = lst->next;
		free(temp->content);
		free(temp);
	}
}

t_list			*ft_lstmap(t_list *lst, t_list *
		(*f)(t_list *elem))
{
	t_list *result;
	t_list *temp;

	result = NULL;
	if (lst && f && (result = f(lst)))
	{
		temp = result;
		while (lst->next)
		{
			if ((temp->next = f(lst->next)))
			{
				temp = temp->next;
				lst = lst->next;
			}
			else
			{
				del(result);
				break ;
			}
		}
	}
	return (result);
}
