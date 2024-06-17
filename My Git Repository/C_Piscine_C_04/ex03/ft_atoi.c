/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:36:46 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/11 11:27:09 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign_count;
	int	i;
	int	number;

	i = 0;
	sign_count = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign_count++;
		i++;
	}
	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	if (sign_count % 2 != 0)
		number = -number;
	return (number);
}
/*
int	main(int argc, char *argv[])
{
	int	atoi;

	if (argc != 2)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	atoi = ft_atoi(argv[1]);
	printf ("%d\n", atoi);
	return (0);
}*/
