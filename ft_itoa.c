/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:19:08 by abjimene          #+#    #+#             */
/*   Updated: 2024/09/26 19:40:59 by abjimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_char(long int number)
{
	size_t	size;

	size = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		number = number * -1;
		size++;
	}
	while (number > 0)
	{
		number = number / 10;
		size++;
	}
	return (size);
}

void	ft_convbase(long int n, char *number, long int i)
{
	if (n < 0)
	{
		number[0] = '-';
		n *= -1;
	}
	if (n >= 10)
		ft_convbase((n / 10), number, (i - 1));
	number[i] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*str;

	size = count_char(n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	str[size--] = '\0';
	ft_convbase(n, str, size);
	return (str);
}
