/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taweibel <taweibel@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 16:45:43 by taweibel          #+#    #+#             */
/*   Updated: 2024/06/02 19:34:53 by taweibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function to create an array of ints from the input values
void	parse_int(char *input, int views[16])
{
	int	i;

	i = 0;
	while (i < 16)
	{
		views[i] = input[i * 2] - '0';
		i++;
	}
}
