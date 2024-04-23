/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:04:14 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/10 19:05:26 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	wordlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static int	countwords(char	const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			s += wordlen(s, c);
		}
		else
			s++;
	}
	return (count);
}

static	void	*free_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		count;

	if (!s)
		return (NULL);
	count = countwords(s, c);
	strs = malloc(sizeof(char *) * (count + 1));
	if (!strs)
		return (NULL);
	strs[count] = NULL;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			strs[i] = ft_substr(s, 0, wordlen(s, c));
			if (!strs[i++])
				return (free_strs(strs));
			s += wordlen(s, c);
		}
		else
			s++;
	}
	return (strs);
}
/*
#include <stdio.h>
printf("%zu\n",sizeof(char *)); //gestionar memoria
int main ()
{
	const char *test = " Razer, kraken, kitty";
	char separator = ',';
	
	char **result = ft_split(test, separator);

	if (result == NULL)
	{
		printf("Fallo en asignación de memoria.\n");
		return (1);
	}
	int i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		result[i] = NULL;
		i++;
	}
	free_strs(result);

	return (0);
}
*/
