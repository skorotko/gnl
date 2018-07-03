/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:29:00 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/21 12:34:27 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d1;
	unsigned char	*d2;
	size_t			i;

	d1 = (unsigned char*)s1;
	d2 = (unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (d1[i] > d2[i])
			return ((int)d1[i] - (int)d2[i]);
		if (d1[i] < d2[i])
			return ((int)d1[i] - (int)d2[i]);
		i++;
	}
	return (0);
}
