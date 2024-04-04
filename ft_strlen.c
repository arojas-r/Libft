/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:00:40 by arojas-r          #+#    #+#             */
/*   Updated: 2024/03/25 04:55:12 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (s[cont])
		cont++;
	return (cont);
}
/* 
 size_t es el numero del resultado sizeof y del strlen 
 (el numero del string o del  array a size_t se le declara una 
 variable tipo contador porque size_t es lo que quiero que devuelva
 el contador se incializa (se le da el valor de cero)
 se hace el blucle que itera el string
 retorna cont porque tiene que retornar un size_
int	main(void)
{
	const char s[20] = "Razer kraken kitty";
	printf("%zu\n", ft_strlen(s));
}*/
