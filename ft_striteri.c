/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:23:07 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/10 19:24:50 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned	int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void test_function(unsigned int i, char *s)
{
	i = 0;
	while (*s >= 'a' && *s <= 'z')
		s[0] -= 32;
}
#include <stdio.h>
int main ()
{
	char str [] = "papitas";
	ft_striteri(str, test_function);
	printf("%s\n", str);
	return (0);
}
*/
