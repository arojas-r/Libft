/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:46:15 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/03 19:15:03 by arojas-r         ###   ########.fr       */
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
#include <stdio.h>
#include <string.h>
int main()
{
	char source [] = "Michitos ronroneando";
	char *dup = strdup(source);

	printf("%s\n", dup);
	free(dup);
	free (source);

	return 0;
}
*/
