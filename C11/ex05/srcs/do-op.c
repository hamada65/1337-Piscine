/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 02:04:42 by aboudiba          #+#    #+#             */
/*   Updated: 2023/09/06 01:57:16 by aboudiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	which_op(int a, char *op, int b)
{
	int	result;
	int	(*operator[5])(int, int);

	result = 1;
	operator[0] = & ft_add;
	operator[1] = & ft_sub;
	operator[2] = & ft_mul;
	operator[3] = & ft_div;
	operator[4] = & ft_mod;
	if (op[0] == '+')
		result *= (*operator[0])(a, b);
	else if (op[0] == '-')
		result *= (*operator[1])(a, b);
	else if (op[0] == '*')
		result *= (*operator[2])(a, b);
	else if (op[0] == '/')
		result *= (*operator[3])(a, b);
	else if (op[0] == '%')
		result *= (*operator[4])(a, b);
	return (result);
}

void	do_op(char *a, char *op, char *b)
{
	int	x;
	int	y;
	int	result;

	x = ft_atoi(a);
	y = ft_atoi(b);
	if (!(op[0] == '+' || op[0] == '-' || op[0] == '*' || op[0] == '/'
			|| op[0] == '%'))
		write(1, "0", 1);
	else if (op[0] == '/' && y == 0)
		write(1, "Stop : division by zero", 23);
	else if (op[0] == '%' && y == 0)
		write(1, "Stop : modulo by zero", 21);
	else
	{
		result = which_op(x, op, y);
		ft_putnbr(result);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	return (0);
}
