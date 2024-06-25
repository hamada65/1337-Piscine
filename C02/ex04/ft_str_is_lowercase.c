/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:40:59 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/08/17 17:49:32 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	int		result;
	char	is_lower;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		is_lower = (str[i] >= 'a' && str[i] <= 'z');
		if (!is_lower)
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
