/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:38:34 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/09/04 16:22:16 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

int	ft_tlen(char **strs, int size)
{
	int	tlen;
	int	i;
	int	j;

	tlen = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			tlen++;
		}
		i++;
	}
	return (tlen);
}

void	ft_concat_strings(char *tab, int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			tab[k++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
			while (sep[j])
				tab[k++] = sep[j++];
		i++;
	}
	tab[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;

	if (size == 0)
	{
		tab = (char *)malloc(1 * sizeof(char));
		tab[0] = '\0';
		return (tab);
	}
	i = ((ft_tlen(strs, size) + (ft_strlen(sep) * (size - 1))) + 1);
	tab = (char *)malloc(i * sizeof(char));
	if (!tab)
		return (NULL);
	ft_concat_strings(tab, size, strs, sep);
	return (tab);
}
