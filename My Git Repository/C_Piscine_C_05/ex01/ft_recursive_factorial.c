/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:16:10 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/13 11:03:09 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int	resultado;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	resultado = 1;
	resultado = nb * (ft_recursive_factorial(nb - 1));
	return (resultado);
}
/*
int	main(int argc, char *argv[])
{
	int	a;

	if (argc == 2)
	{
		a = atoi(argv[1]);
		printf ("El resultado es: %d\n", ft_recursive_factorial(a));
	}
	return (0);
}*/
