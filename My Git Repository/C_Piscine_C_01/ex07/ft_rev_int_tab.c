/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:47:42 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/05/28 12:09:41 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	inicio;
	int	final;
	int	swap;

	inicio = 0;
	final = size - 1;
	while (inicio < final)
	{
		swap = tab[inicio];
		tab[inicio] = tab[final];
		tab[final] = swap;
		inicio++;
		final--;
	}
}
