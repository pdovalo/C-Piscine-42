/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_left.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taweibel <taweibel@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:26:07 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/02 19:31:51 by taweibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function to count the number of boxes visible from the left
int	count_left(int board[4][4], int row)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			count++;
		}
		i++;
	}
	return (count);
}
