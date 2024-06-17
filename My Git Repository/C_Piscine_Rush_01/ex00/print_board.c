/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:34:05 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/04 11:24:14 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function to print the board with it's values
#include <unistd.h>

void	print_board(int board[4][4])
{
	char	c;
	int		row;
	int		col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			c = board[row][col] + '0';
			write (1, &c, 1);
			if (col != 3)
			{
				write (1, " ", 1);
			}
			col++;
		}
		write (1, "\n", 1);
		row++;
	}
}
