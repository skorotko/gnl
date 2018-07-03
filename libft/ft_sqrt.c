/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 12:31:03 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/21 15:44:20 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int	root;
	int	res;
	int check;

	if (nb > 0)
	{
		if (nb == 1)
			return (1);
		root = 1;
		check = nb / 4 + 1;
		while (++root <= check)
		{
			res = root * root;
			if (res == nb)
				return (root);
			if (res > nb)
				return (0);
		}
	}
	return (0);
}
