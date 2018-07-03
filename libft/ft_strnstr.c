/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:18:06 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/21 14:12:18 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	z;
	size_t	c;

	i = 0;
	while (haystack[i] && i < len)
	{
		z = 0;
		c = i;
		while (haystack[c] == needle[z] && needle[z] && c < len)
		{
			c++;
			z++;
		}
		if (needle[z] == '\0')
			return ((char*)&haystack[c - z]);
		i++;
	}
	if (*haystack == '\0' && *needle == '\0')
		return ((char*)haystack);
	return (NULL);
}
