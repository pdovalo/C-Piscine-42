/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:04:23 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/06/03 15:21:21 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest [i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char src[] = "Mouse";
	char dest[] = "Mickey";

	printf ("%s\n", ft_strncat(dest, src, 3));
	return (0);
}*/