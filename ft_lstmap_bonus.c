/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjimene <abjimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:02:57 by abjimene          #+#    #+#             */
/*   Updated: 2024/10/01 19:08:10 by abjimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*next_node;

	if (!lst || !f)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (new == NULL)
	{
		ft_lstclear(&new, del);
		return (NULL);
	}
	next_node = ft_lstmap(lst->next, f, del);
	if (next_node == NULL && lst->next != NULL)
	{
		ft_lstclear(&new, del);
		return (NULL);
	}
	new->next = next_node;
	return (new);
}
