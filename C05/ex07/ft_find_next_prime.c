/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:03:54 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/08/29 14:44:05 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	j;
	int	found;

	j = nb;
	if (nb <= 2)
		return (2);
	while (1)
	{
		i = 2;
		found = 0;
		while (i * i <= j && i <= 46340)
		{
			if ((j % i) == 0)
			{
				found = 1;
				break ;
			}
			i++;
		}
		if (!found)
			return (j);
		j++;
	}
	return (1);
}
