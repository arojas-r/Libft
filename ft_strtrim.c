/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:06:35 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/09 19:27:16 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	result = ft_substr(s1, start, len);
	return (result);
}
/*
//Elimina los caracteres de espacio en blanco (espacios, tabulaciones, 
//saltos de línea) al principio y al final de una cadena.
#include <stdio.h>
int main ()
{
	char const *s1 = "k/ksk/  razer kraken kitty01 sjdk/kjdk/ ";
	char const *set = "k/ ";

	char *trimmed = ft_strtrim(s1, set);

	if (trimmed == NULL)
	{
		printf("NULL\n");
		return (1);
	}
	printf("Cadena recortada: '%s'\n", trimmed);
	free (trimmed);

	return 0;
}
*/
