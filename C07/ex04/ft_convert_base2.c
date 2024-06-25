/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:15:54 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/09/02 20:46:39 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + ft_strlen(++s));
}

int	ft_base_valid(char *s)
{
	int	length;
	int	i;
	int	j;

	i = 0;
	length = ft_strlen(s);
	if (length < 2)
		return (0);
	while (i < length)
	{
		j = 0;
		while (j < length)
		{
			if (s[i] == '+' || s[i] == '-')
				return (0);
			else if (s[i] == ' ' || s[i] == '\t'
				|| s[i] == '\n' || s[i] == '\r' || s[i] == '\v' || s[i] == '\f')
				return (0);
			else if (s[i] == s[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	find_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi(char *str, int length, char *base)
{
	int		sign;
	long	number;

	sign = 0;
	while (*str == ' ' || *str == '\t'
		|| *str == '\n' || *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign++;
	number = 0;
	while (find_index(*str, base) >= 0)
	{
		number *= length;
		number += (find_index(*str, base));
		str++;
	}
	if (sign % 2)
		return (-number);
	return (number);
}

int	ft_atoi_base(char *str, char *base)
{
	int		length;
	long	nbr;

	length = ft_strlen(base);
	if (ft_base_valid(base))
	{
		nbr = ft_atoi(str, length, base);
		return (nbr);
	}
	return (0);
}
