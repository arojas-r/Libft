/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 06:08:08 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/02 07:28:27 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	cont;

	cont = 0;
	if (size != 0)
	{
		while (cont < size - 1 && src[cont])
		{
			dest[cont] = src[cont];
			cont++;
		}
		dest[cont] = '\0';
	}
	while (src[cont])
		cont++;
	return (cont);
}
//Copia una cadena a un búfer 
//asegurando que no se exceda el tamaño del búfer.