/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:49:40 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/09/03 00:52:52 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*table;
	int			i;

	i = 0;
	table = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!table)
		return (NULL);
	while (i < ac)
	{
		table[i].size = ft_strlen(av[i]);
		table[i].str = av[i];
		table[i].copy = (char *)malloc((table[i].size + 1) * sizeof(char));
		if (!table[i].copy)
			return (NULL);
		ft_strcpy(table[i].copy, av[i]);
		i++;
	}
	table[i].str = 0;
	table[i].size = 0;
	table[i].copy = 0;
	return (table);
}
