/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_right.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taweibel <taweibel@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:22:11 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/02 19:32:12 by taweibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function to count the number of boxes visible from the right
int	count_right(int board[4][4], int row)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 3;
	while (i >= 0)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			count++;
		}
		i--;
	}
	return (count);
}
