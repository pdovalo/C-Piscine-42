/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taweibel <taweibel@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:43:20 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/02 19:46:33 by taweibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function calls is_valid,
solves and fills in the board,
checks the visibility constraints
and returns or the solution or error*/
#include <unistd.h>

int	check_visibility(int board[4][4], int *views);
int	is_valid(int board[4][4], int row, int col, int value);

int	solve(int board[4][4], int row, int col, int *views)
{
	int	value;

	if (row == 4)
	{
		return (check_visibility(board, views));
	}
	if (col == 4)
	{
		return (solve(board, row + 1, 0, views));
	}
	value = 1;
	while (value <= 4)
	{
		if (is_valid(board, row, col, value))
		{
			board[row][col] = value;
			if (solve(board, row, col + 1, views))
			{
				return (1);
			}
			board[row][col] = 0;
		}
		value++;
	}
	return (0);
}
