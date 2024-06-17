/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:12:35 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/13 11:03:40 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (i * i <= nb)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	int	a;

	if (argc == 2)
	{
		a = atoi(argv[1]);
		printf ("La raíz cuadrada es: %d\n", ft_sqrt(a));
	}
	return (0);
}*/
