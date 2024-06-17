/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taweibel <taweibel@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 20:01:19 by jsagaro-          #+#    #+#             */
/*   Updated: 2024/06/02 20:37:28 by taweibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function to validate the input
int	check_input(char *input)
{
	int	count;
	int	i;

	count = 0;
	while (input[count] != '\0')
	{
		count++;
	}
	if (count != 31)
	{
		return (0);
	}
	i = 0;
	while (i < 31)
	{
		if ((i % 2 == 0 && (input[i] < '1' || input[i] > '4'))
			|| (i % 2 == 1 && input[i] != ' '))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
