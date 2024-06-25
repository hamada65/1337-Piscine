/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:49:26 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/08/29 10:07:39 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = nb;
	i = nb - 1;
	if (nb < 0)
	{
		result = 0;
	}
	else if (nb != 0)
	{
		while (i >= 1)
		{
			result *= i;
			i--;
		}
	}
	else
	{
		result = 1;
	}
	return (result);
}
