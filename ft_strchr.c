/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:03:54 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/02 10:18:56 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c || !c)
		return ((char *)s);
	return (NULL);
}
/*
int main ()
{
	const char *s = "CURSUS42";
	int c = 'C';
	
	printf("%ld\n", ft_strchr (s, c) - s);
	printf("%s\n", ft_strchr (s, c));
	
	return (0);
}*/
