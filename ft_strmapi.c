/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:25:28 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/10 19:25:56 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*result;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
//Aplica una función a cada carácter de una 
//cadena y crea una nueva cadena con los resultados.
char test_function(unsigned int i, char c)
{
	i = 0;
	while ( c >= 'a' && c <= 'z')
		c -= 32;
		return (c);
}

#include <stdio.h>
int main()
{
	const char *str = "holitas";
	char *result = ft_strmapi(str, test_function);

	printf("%s\n", result);
	return 0;
}
*/
