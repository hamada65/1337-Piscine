/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:50:26 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/08/17 17:52:41 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;
	int		result;
	char	is_upper;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		is_upper = (str[i] >= 'A' && str[i] <= 'Z');
		if (!is_upper)
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
