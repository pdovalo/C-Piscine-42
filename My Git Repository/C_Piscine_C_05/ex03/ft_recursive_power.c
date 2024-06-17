/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:16:26 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/12 11:15:38 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/

int	ft_recursive_power(int nb, int power)
{
	int	resultado;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	resultado = 1;
	resultado = nb * ft_recursive_power(nb, power - 1);
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
		printf ("El resultado es: %d\n", ft_recursive_power(a, b));
	}
	return (0);
}*/
