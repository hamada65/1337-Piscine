/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:26:27 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/08/16 20:08:46 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = 0;
		while (b <= 99)
		{
			if (b > a)
			{
				ft_putchar(48 + a / 10);
				ft_putchar(48 + a % 10);
				ft_putchar(' ');
				ft_putchar(48 + b / 10);
				ft_putchar(48 + b % 10);
				if (a != 98 || b != 99)
				{
					write(1, ", ", 2);
				}
			}
			b++;
		}
		a++;
	}
}
