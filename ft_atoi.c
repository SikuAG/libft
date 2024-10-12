/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjimene <abjimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:49:34 by abjimene          #+#    #+#             */
/*   Updated: 2024/10/01 20:30:13 by abjimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c);
int	ft_isspace(int c);

/*The atoi() function converts the initial portion of the string pointed
to by nptr to int.*/
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (ft_isspace(nptr[i]))
	{
		i++;
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		nbr = (nbr * 10) + (nptr[i] - '0');
		i++;
	}
	return (nbr * sign);
}

/* Main function to test ft_atoi
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Your ft_atoi version: \n");
	printf("ft_atoi('%s') = %d\n", argv[1], ft_atoi(argv[1]));
	printf("Original atoi: \n");
	printf("atoi('%s' = %d\n", argv[1], atoi(argv[1]));
	return (0);
}
	// Casos de prueba para la función ft_atoi
	const char *str1 = "42";
	const char *str2 = "   -42";
	const char *str3 = "   +1234";
	const char *str4 = "   987abc";
	const char *str5 = "-987";
	const char *str6 = "  +0";
	const char *str7 = "   2147483647";  // valor máximo de un int
	const char *str8 = "  -2147483648";  // valor mínimo de un int
	const char *str9 = "   -00123";      // número con ceros a la izquierda

	// Imprimir los resultados de los casos de prueba
	printf("ft_atoi('%s') = %d\n", str1, ft_atoi(str1));
	printf("ft_atoi('%s') = %d\n", str2, ft_atoi(str2));
	printf("ft_atoi('%s') = %d\n", str3, ft_atoi(str3));
	printf("ft_atoi('%s') = %d\n", str4, ft_atoi(str4));
	printf("ft_atoi('%s') = %d\n", str5, ft_atoi(str5));
	printf("ft_atoi('%s') = %d\n", str6, ft_atoi(str6));
	printf("ft_atoi('%s') = %d\n", str7, ft_atoi(str7));
	printf("ft_atoi('%s') = %d\n", str8, ft_atoi(str8));
	printf("ft_atoi('%s') = %d\n", str9, ft_atoi(str9));
*/
