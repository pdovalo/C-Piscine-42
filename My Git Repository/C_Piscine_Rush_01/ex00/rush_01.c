/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taweibel <taweibel@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:25:57 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/02 19:43:47 by taweibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_board(int board[4][4]);
void	initial_board(int board[4][4]);
void	parse_int(char *input, int views[16]);
int		solve(int board[4][4], int row, int col, int *views);

/*Function calls initial_board,
calls parse_int,
calls solve and returns the board or an error*/
void	rush_01(char *input)
{
	int	views[16];
	int	board[4][4];

	initial_board(board);
	parse_int(input, views);
	if (solve(board, 0, 0, views))
	{
		print_board(board);
	}
	else
	{
		write(1, "Error\n", 7);
	}
}
