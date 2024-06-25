/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 00:15:03 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/09/06 21:00:06 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*p;

	i = 0;
	p = malloc(length * sizeof(int *));
	if (!p)
		return (0);
	while (i < length)
	{
		p[i] = (*f)(tab[i]);
		i++;
	}
	return (p);
}
