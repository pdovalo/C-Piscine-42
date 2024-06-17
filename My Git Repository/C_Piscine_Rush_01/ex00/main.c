/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taweibel <taweibel@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:19:06 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/02 22:40:47 by taweibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush_01(char *input);
int		check_input(char *input);

int	main(int argc, char *argv[])
{
	if (argc != 2 || check_input(argv[1]) == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	rush_01(argv[1]);
	return (0);
}
