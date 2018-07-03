/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:48:03 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/21 14:16:06 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	z;
	int c;

	i = 0;
	while (haystack[i])
	{
		c = i;
		z = 0;
		while (haystack[c] == needle[z] && needle[z])
		{
			c++;
			z++;
		}
		if (!needle[z])
			return ((char*)&haystack[c - z]);
		i++;
	}
	if (*haystack == '\0' && *needle == '\0')
		return ((char*)haystack);
	return (NULL);
}
