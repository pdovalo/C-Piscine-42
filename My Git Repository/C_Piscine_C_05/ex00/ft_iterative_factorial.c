/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:29:48 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/12 09:17:10 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	resultado;
	int	i;

	if (nb < 0)
		return (0);
	resultado = 1;
	i = 0;
	while (i < nb)
	{
		resultado = resultado * (i + 1);
		i++;
	}
	return (resultado);
}
/*
int	main(void)
{
	printf ("El resultado es: %d\n", ft_iterative_factorial(5));
	return (0);
}*/
