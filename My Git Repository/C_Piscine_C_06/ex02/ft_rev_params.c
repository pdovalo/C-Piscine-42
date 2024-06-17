/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:55:09 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/12 14:10:40 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;
	int		i;
	int		j;

	if (argc > 0)
	{
		i = argc - 1;
		while (i > 0)
		{
			str = argv[i];
			j = 0;
			while (str[j] != '\0')
			{
				write (1, &str[j], 1);
				j++;
			}
			write (1, "\n", 1);
			i--;
		}
	}
	return (0);
}
