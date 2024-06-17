/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:51:48 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/05/26 14:13:53 by francism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			if ((a == 1 || a == x) && (b == 1 || b == y))
				ft_putchar ('o');
			else if (b == 1 || b == y)
				ft_putchar ('-');
			else if (a == 1 || a == x)
				ft_putchar ('|');
			else
				ft_putchar(' ');
			a++;
		}
		b++;
		ft_putchar('\n');
	}
}
