/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:32:53 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/08/21 13:16:26 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		result;
	char	is_number;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		is_number = (str[i] >= '0' && str[i] <= '9');
		if (!is_number)
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
