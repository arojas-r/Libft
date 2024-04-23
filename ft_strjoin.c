/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:01:56 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/10 19:13:17 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = malloc(sizeof(char) * (len1 + len2 +1));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, len1);
	ft_memcpy(result + len1, s2, len2 +1);
	return (result);
}
/*
#include <stdio.h>
int main ()
{
	char str1 [] = "razer ";
	char str2 [] = "kraken kitty";
	char *result = ft_strjoin(str1, str2);
			
	if (result == NULL)
	{
		printf("Error.\n");
	}
	else
	{
		printf("Resultado de la unión: %s\n", result);
		free (result);
	}

	return 0;
}
*/
