/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:10:35 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/08/27 23:52:14 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	isbasevalid(char *str)
{
	int	i;
	int	j;

	if (ft_strlen(str) <= 1)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_calcul_base(long int quotient, int baselen, char *base)
{
	int			remainder;
	char		numtable[100];
	int			j;

	j = 0;
	if (quotient < 0)
	{
		write(1, "-", 1);
		quotient *= -1;
	}
	while (quotient != 0)
	{
		remainder = quotient % baselen;
		numtable[j] = base[remainder];
		j++;
		quotient = quotient / baselen;
	}
	while (j-- > 0)
		ft_putchar(numtable[j]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			baselen;
	int			is_blacklisted;

	baselen = ft_strlen(base);
	is_blacklisted = isbasevalid(base);
	if (nbr == 0)
	{
		ft_putchar(nbr + '0');
	}
	else if (is_blacklisted)
		ft_calcul_base(nbr, baselen, base);
}
