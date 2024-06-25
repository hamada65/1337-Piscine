/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:53:41 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/08/17 17:56:56 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;
	int		result;
	char	is_printable;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		is_printable = (str[i] >= 32 && str[i] <= 126);
		if (!is_printable)
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
