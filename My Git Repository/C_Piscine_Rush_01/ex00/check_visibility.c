/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taweibel <taweibel@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:56:32 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/02 19:31:13 by taweibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_up(int board[4][4], int col);
int	count_down(int board[4][4], int col);
int	count_left(int board[4][4], int row);
int	count_right(int board[4][4], int row);

// Function to check if the visibility constraints are met
int	check_visibility(int board[4][4], int *views)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (count_up(board, i) != views[i])
			return (0);
		if (count_down(board, i) != views[4 + i])
			return (0);
		if (count_left(board, i) != views[8 + i])
			return (0);
		if (count_right(board, i) != views[12 + i])
			return (0);
		i++;
	}
	return (1);
}
