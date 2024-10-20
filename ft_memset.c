/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjimene <abjimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:45:31 by abjimene          #+#    #+#             */
/*   Updated: 2024/09/28 12:27:18 by abjimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The memset() function fills the first n bytes of the memory area pointed to
by s with the constant byte c.*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;  // Asegura que c se trunca a un byte.
			i++;
	}
	return (s);
}

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char buffer[50]; // Un buffer de 50 bytes para nuestras pruebas.

    // Prueba 1: Llenar el buffer con 'A'
    ft_memset(buffer, 'A', 10);
    buffer[10] = '\0'; // Agregamos un terminador nulo para imprimir como cadena.
    printf("Test 1 - Llenar los primeros 10 bytes con 'A': %s\n", buffer);

    // Prueba 2: Llenar el buffer con 'B' en los primeros 5 bytes.
    ft_memset(buffer, 'B', 5);
    buffer[10] = '\0'; // Aseguramos el terminador nulo.
    printf("Test 2 - Llenar los primeros 5 bytes con 'B': %s\n", buffer);

    // Prueba 3: Llenar todo el buffer con 'C'
    ft_memset(buffer, 'C', 49); // Llenamos los primeros 49 bytes (sin '\0').
    buffer[49] = '\0'; // Terminador nulo para que se imprima correctamente.
    printf("Test 3 - Llenar todo el buffer con 'C': %s\n", buffer);

    // Prueba 4: Llenar 0 bytes (no debería cambiar nada).
    ft_memset(buffer, 'D', 0);
    printf("Test 4 - Llenar 0 bytes (buffer intacto): %s\n", buffer);

    return 0;
}

/*
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		str[n - 1] = c;
		n--;
	}
	return (s);
}
*/
