/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:24:04 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/09/03 00:14:23 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;
	int	len;

	len = max - min;
	if (len > 0 && !(min >= max))
	{
		tab = (int *)malloc(len * sizeof(int));
		if (!tab)
			return (NULL);
		i = min;
		j = 0;
		while (i < max)
		{
			tab[j] = i;
			i++;
			j++;
		}
		return (tab);
	}
	return (NULL);
}
