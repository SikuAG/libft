/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:48:58 by abjimene          #+#    #+#             */
/*   Updated: 2024/09/30 19:50:44 by abjimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The memcmp() function compares the first n bytes
(each interpreted as unsigned char) of the memory areas s1 and s2.*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d1;
	unsigned char	*d2;

	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	if (n == '\0')
		return (0);
	while (--n && *d1 == *d2)
	{
		d1++;
		d2++;
	}
	return ((int)(*d1 - *d2));
}
