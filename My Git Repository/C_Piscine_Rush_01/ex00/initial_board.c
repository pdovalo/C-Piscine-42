/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taweibel <taweibel@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:13:46 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/02 19:33:28 by taweibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function to initialize the board with 0 in all positions
void	initial_board(int board[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
}
