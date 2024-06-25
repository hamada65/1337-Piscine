/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 02:11:45 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/08/21 10:03:26 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_upperlower(char *a)
{
	if (*a >= 'a' && *a <= 'z')
	{
		*a -= 32;
	}
	else
	{
		*a += 32;
	}
}

int	is_alpha(char *a)
{
	int	result;

	result = 0;
	if ((*a >= 'a' && *a <= 'z') || (*a >= 'A' && *a <= 'Z'))
	{
		result = 1;
	}
	return (result);
}

int	is_numeric(char *a)
{
	int	result;

	result = 0;
	if (*a >= '0' && *a <= '9')
	{
		result = 1;
	}
	return (result);
}

char	*ft_strlowcase(char *str)
{
	int		i;
	char	is_upper;

	i = 0;
	while (str[i] != '\0')
	{
		is_upper = (str[i] >= 'A' && str[i] <= 'Z');
		if (is_upper)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_letter;
	int	is_letter2;
	int	is_num;

	i = 0;
	is_letter = 0;
	is_letter2 = 0;
	is_num = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		is_letter = is_alpha(&str[i]);
		is_num = is_numeric(&str[i - 1]);
		if (!(i == 0))
		{
			is_letter2 = is_alpha(&str[i - 1]);
		}
		if ((i == 0 && is_letter) || (is_letter && !is_letter2 && !is_num))
		{
			ft_upperlower(&str[i]);
		}
		i++;
	}
	return (str);
}
