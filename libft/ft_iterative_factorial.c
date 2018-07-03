/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 12:29:54 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/21 15:43:00 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if (nb >= 0 && nb <= 12)
	{
		if (nb == 0 || nb == 1)
			return (1);
		res = 1;
		i = 1;
		while (++i <= nb)
			res *= i;
		return (res);
	}
	return (0);
}
