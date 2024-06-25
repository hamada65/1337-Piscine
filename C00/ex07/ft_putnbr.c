/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:18:40 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/08/16 23:20:57 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	table[11];
	int		i;

	if (nb == 0 || nb == -2147483648)
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		else
			write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	i = 0;
	while (nb > 0)
	{
		table[i++] = nb % 10 + '0';
		nb /= 10;
	}
	while (i-- > 0)
		write(1, &table[i], 1);
}
