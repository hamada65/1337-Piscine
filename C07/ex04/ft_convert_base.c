/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:52:41 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/09/02 20:46:37 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);
int	ft_base_valid(char *s);
int	ft_strlen(char *s);

int	calc_base(long long int nbr, char *base, unsigned int length)
{
	if (nbr < length)
		return (1);
	return (1 + calc_base(nbr / length, base, length));
}

void	putbase(char *ptr, int length, int number, char *base_to)
{
	int	i;

	i = 0;
	if (number < 0)
	{
		ptr[i] = '-';
		number *= -1;
		i++;
	}
	while (i < length)
	{
		ptr[length - 1 - i] = base_to[number % ft_strlen(base_to)];
		number /= ft_strlen(base_to);
		i++;
	}
	ptr[length] = '\0';
}

void	ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	s1[0] = '-';
	while (s2[i])
	{
		s1[i + 1] = s2[i];
		i++;
	}
	s1[i + 1] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*ptr;
	char		*str;
	long int	number;
	int			sign;
	int			length;

	sign = 0;
	if (!ft_base_valid(base_from) || !ft_base_valid(base_to))
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	if (number < 0)
	{
		sign = 1;
		number *= -1;
	}
	length = calc_base(number, base_to, ft_strlen(base_to));
	ptr = malloc((length + 1) * sizeof(char));
	putbase(ptr, length, number, base_to);
	if (!sign)
		return (ptr);
	str = malloc(sizeof(ptr) + 1);
	ft_strcpy(str, ptr);
	return (str);
}
