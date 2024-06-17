/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:43:29 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/10 12:13:15 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr (nb / 10);
	}
	ft_putchar ((nb % 10) + '0');
}
/*
int	main(void)
{
	ft_putnbr (42);
	return (0);
}*/
