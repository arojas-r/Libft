/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:30:12 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/10 19:30:37 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}
/* int	main(void)
{
	int	nbr;
	int	fd;

	nbr = 432;
	fd = 1;
	ft_putnbr_fd(nbr, fd);
	return (0);
} */

/*
#include <stdio.h>
#include <fcntl.h>
int main() 
{
	int fd;
	fd = open("example.txt", O_WRONLY | O_CREAT, 0644);
	
	if (fd == -1)
	{
	
	return (1);

	}
		ft_putnbr_fd(34, fd);
	
	close (fd);

	return (0);
    
}
*/
