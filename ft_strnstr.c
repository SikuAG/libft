/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:49:21 by abjimene          #+#    #+#             */
/*   Updated: 2024/09/30 19:51:48 by abjimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The strnstr() function locates the first occurrence of the  null-terminated
string little in the string big, where not more than len characters
are searched. Characters that appear after a `\0' character  are
not  searched.  Since the strnstr() function is a FreeBSD specific API,
it should only be used when portability is not a concern.*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_l;

	little_l = ft_strlen(little);
	i = 0;
	if (little_l == 0)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[i] != '\0' && i + little_l <= len)
	{
		if (ft_strncmp(&big[i], little, little_l) == 0)
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
