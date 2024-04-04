/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 19:29:26 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/03 19:29:58 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
	char data[] = {'c', 'u', 'r', 's', 'u', 's'};

	char *pos = ft_memchr(data, 'r', 6);
	if (pos == NULL)
	{
	printf("character not found!\n");
	}
	else
	{
	printf("pos[0] = %c\n", pos[0]);
	printf("pos[1] = %c\n", pos[1]);
	} 
	
	char str[] = "johnwick@gmail.com";
	char *domain = ft_memchr(str, '@', ft_strlen(str));
	domain++;

	printf("domain = %s\n", domain);
	
	return (0);
}
*/
