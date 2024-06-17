/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:51:28 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/12 10:15:44 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultado;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	resultado = 1;
	while (i <= power)
	{
		resultado = resultado * nb;
		i++;
	}
	return (resultado);
}
/*
int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf ("El resultado es: %d\n", ft_iterative_power(a, b));
	}
	return (0);
}*/
