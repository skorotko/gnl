/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:34:02 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/20 19:55:27 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long int s)
{
	int i;

	i = 0;
	if (s <= 0)
		i++;
	while (s != 0)
	{
		s = s / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	long int	z;
	int			g;
	int			k;
	char		*str;

	z = (long int)n;
	k = 0;
	g = ft_intlen(z);
	str = ft_memalloc(g + 1);
	if (str == NULL)
		return (NULL);
	str[g] = '\0';
	if (z == 0)
		str[0] = '0';
	if (z < 0)
	{
		str[0] = '-';
		z = z * (-1);
	}
	while (z)
	{
		str[--g] = (z % 10) + '0';
		z = z / 10;
	}
	return (str);
}
