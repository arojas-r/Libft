/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:46:15 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/04 14:52:41 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1) + 1;
	dup = malloc(sizeof(char) * (len));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s1, len);
	return (dup);
}
/* 
//Duplica una cadena de caracteres, asignando memoria para la copia y copiando 
//el contenido de la cadena original a la nueva ubicación de memoria.
#include <stdio.h>
#include <string.h>
int main()
{
	char source[] = "Razer Kitty";
	char *dup = ft_strdup(source);

	printf("%s\n", dup);
	free(dup);
	return 0;
} */
