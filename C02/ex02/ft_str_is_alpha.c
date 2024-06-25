/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:07:58 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/08/17 17:32:58 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		result;
	char	is_lowercase;
	char	is_uppercase;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		is_lowercase = (str[i] >= 'a' && str[i] <= 'z');
		is_uppercase = (str[i] >= 'A' && str[i] <= 'Z');
		if (!(is_lowercase || is_uppercase))
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
