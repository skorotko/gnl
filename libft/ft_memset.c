/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:49:53 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/19 18:03:28 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*z;

	i = 0;
	z = (unsigned char*)b;
	while (len > 0)
	{
		z[i] = c;
		i++;
		len--;
	}
	return (b);
}
