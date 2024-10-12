/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:58:54 by abjimene          #+#    #+#             */
/*   Updated: 2024/09/30 19:58:55 by abjimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *
 * The calloc() function contiguously allocates enough space for 
 *   ~count objects elements 
 *   ~that are size bytes of memory each.
 *   returns a pointer to the allocated memory. 
	 The allocated memory is filled with bytes of value zero.

	 If error return NULL 
	 and set errno to ENOMEM.

	 In the C standard library, calloc is expected to return a 
	 valid pointer when both nmemb and size are 0.

*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*ptr;

	bytes = nmemb * size;
	if (size && ((bytes / size) != nmemb))
		return (NULL);
	ptr = malloc(bytes);
	if (NULL == ptr)
		return (NULL);
	ft_bzero(ptr, bytes);
	return (ptr);
}

/*The calloc() function allocates memory for an array of nmemb elements of
size bytes each and returns a pointer to the allocated memory.
The memory is set to zero. If nmemb or size is 0, then calloc() returns a
unique pointer value that can later be successfully passed to free().
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}*/
