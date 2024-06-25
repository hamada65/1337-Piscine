/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 22:44:26 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/09/04 22:44:35 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	count_segments(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (check(str[i], charset) && str[i])
			i++;
		if (!check(str[i], charset) && str[i])
			count++;
		while (!check(str[i], charset) && str[i])
			i++;
	}
	return (count);
}

void	copy_segment(char *src, char *dest, char *charset)
{
	int	i;

	i = 0;
	while (src[i] && !check(src[i], charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	char	**ptr;
	int		k;
	int		l;

	count = count_segments(str, charset);
	ptr = (char **)malloc((count + 1) * sizeof(char *));
	k = 0;
	while (k < count)
	{
		while (check(*str, charset) && *str)
			str++;
		l = 0;
		while (!check(str[l], charset) && str[l])
			l++;
		ptr[k] = (char *)malloc((l + 1) * sizeof(char));
		copy_segment(str, ptr[k], charset);
		str += l;
		k++;
	}
	ptr[k] = 0;
	return (ptr);
}
