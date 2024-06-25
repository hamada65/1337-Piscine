/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:58:54 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/09/07 21:02:49 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check(int i, int div)
{
	int	j;
	int	tmp;

	j = i / div;
	i -= j * div;
	div /= 10;
	while (div >= 1)
	{
		tmp = i / div;
		if (tmp <= j)
			return (0);
		i -= tmp * div;
		j = tmp;
		div /= 10;
	}
	return (1);
}

void	display(int i, int division)
{
	int	tmp;

	if (i == 0 && division == 1)
		write(1, "0", 1);
	while (i >= 1)
	{
		tmp = i / division;
		ft_putchar(tmp + 48);
		i -= tmp * division;
		division /= 10;
	}
}

int	max_number(int n)
{
	int	i;
	int	max;

	i = 0;
	max = 1;
	while (i < n)
	{
		max *= 10;
		i++;
	}
	return (max);
}

void	ft_print_combn(int n)
{
	int	i;
	int	max;
	int	division;
	int	test;

	i = 0;
	max = max_number(n);
	division = max / 10;
	while (i < max)
	{
		if (check(i, division))
		{
			test = i / division;
			display(i, division);
			if (test == 10 - n)
				break ;
			write(1, ", ", 2);
		}
		i++;
	}
}
