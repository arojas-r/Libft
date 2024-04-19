/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:19:12 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/04 08:31:39 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
/*
#include <stdio.h>
int main(void)
{
    size_t count = 10;
    char *result = ft_calloc(count, sizeof(char));

	size_t len = 0;
	while (len < count)
	{
		if (result[len] != 0)
		{
			printf("error");
			return 0;
		}
		len++;
	}
	printf("right\n");
	return 0;
}*/
