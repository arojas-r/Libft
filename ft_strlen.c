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
//Calcula la longitud de una cadena de caracteres
int	main(void)
{
	const char s[20] = "Razer kraken kitty";
	printf("%zu\n", ft_strlen(s));
}*/
