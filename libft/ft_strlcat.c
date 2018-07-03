/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:18:45 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/20 17:40:04 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;

	i = ft_strlen(dst);
	if (i <= dstsize)
		k = i + ft_strlen(src);
	else
		k = dstsize + ft_strlen(src);
	while (dstsize && i < dstsize - 1)
	{
		if (*src)
			dst[i] = *src;
		else
			dst[i] = '\0';
		i++;
		src++;
	}
	dst[i] = '\0';
	return (k);
}
