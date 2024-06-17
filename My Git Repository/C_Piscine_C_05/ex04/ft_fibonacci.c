/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:16:27 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/12 11:57:23 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/

int	ft_fibonacci(int index)
{
	int	n;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	n = ft_fibonacci (index - 2) + ft_fibonacci (index - 1);
	return (n);
}
/*
int	main(int argc, char *argv[])
{
	int	a;

	if (argc == 2)
	{
		a = atoi(argv[1]);
		printf ("Elemento de Fibonacci: %d\n", ft_fibonacci(a));
	}
	return (0);
}*/
