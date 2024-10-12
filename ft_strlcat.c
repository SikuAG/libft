/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjimene <abjimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:47:06 by abjimene          #+#    #+#             */
/*   Updated: 2024/09/28 00:32:18 by abjimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_l;
	size_t	src_l;

	i = 0;
	src_l = ft_strlen(src);
	dst_l = ft_strlen(dst);
	if (size == 0 || size <= dst_l)
		return (src_l + size);
	j = dst_l;
	while (src[i] != '\0' && i < size - dst_l -1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst_l + src_l);
}
