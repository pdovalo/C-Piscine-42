/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_down.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taweibel <taweibel@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:05:00 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/02 19:31:35 by taweibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function to count the number of boxes visible from below
int	count_down(int board[4][4], int col)
{
	int	i;
	int	max;
	int	count;

	max = 0;
	count = 0;
	i = 3;
	while (i >= 0)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			count++;
		}
		i--;
	}
	return (count);
}
