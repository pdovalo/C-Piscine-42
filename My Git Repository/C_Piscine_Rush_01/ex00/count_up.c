/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_up.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taweibel <taweibel@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:15:18 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/02 19:32:59 by taweibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function to count the number of boxes visible from above
int	count_up(int board[4][4], int col)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			count++;
		}
		i++;
	}
	return (count);
}
