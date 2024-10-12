/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:40:45 by abjimene          #+#    #+#             */
/*   Updated: 2024/10/01 19:06:38 by abjimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates and returns a "fresh" link. The variables content and content_size
of the new link are initialized by copy of the parameters of the function.
If the parameter content is nul, the variable content is initializaed to NULL
and the variable content_size is initialized to 0 even if the parameter
content_size isn't. The variable next is initialized to NULL.
If the allocation fails, the function returns NULL.*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc (sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
