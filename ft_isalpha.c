/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjimene <abjimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:42:19 by abjimene          #+#    #+#             */
/*   Updated: 2024/09/30 18:13:02 by abjimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*checks for an alphabetic character; in the standard "C" locale,
it is equivalent to (isupper(c) || islower(c)).*/
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
