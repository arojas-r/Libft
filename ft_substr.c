/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:54:37 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/09 18:55:03 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr [len] = '\0';
	return (substr);
}
/*
int main ()
{
	const char *str = "Sepárame esta cadena";
	char *substr = ft_substr(str, 10, 5);

	printf("subcadena:'%s'\n", substr);
	free(substr);
	printf("Memoria liberada\n");

	return 0 ;
}
*/
