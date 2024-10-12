/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjimene <abjimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:29:32 by abjimene          #+#    #+#             */
/*   Updated: 2024/09/30 19:34:37 by abjimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*last_occurence;
	char			chr;

	chr = (char)c;
	i = 0;
	last_occurence = NULL;
	while (s[i])
	{
		if (s[i] == chr)
		{
			last_occurence = (char *)&s[i];
		}
		i++;
	}
	if (s[i] == chr)
	{
		last_occurence = (char *)&s[i];
	}
	return (last_occurence);
}
