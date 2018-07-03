/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:32:25 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/21 12:28:40 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*s1;
	size_t			a;

	s = (unsigned char*)dst;
	s1 = (unsigned char*)src;
	a = 0;
	if (s > s1)
		while (len)
		{
			s[len - 1] = s1[len - 1];
			len--;
		}
	else
		while (a < len)
		{
			s[a] = s1[a];
			a++;
		}
	return (s);
}
