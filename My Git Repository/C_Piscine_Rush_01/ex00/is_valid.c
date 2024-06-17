/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taweibel <taweibel@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:29:17 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/02 19:34:05 by taweibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function that verifies the value is not already present in the column or row
int	is_valid(int board[4][4], int row, int col, int value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[row][i] == value || board[i][col] == value)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
