/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:08:33 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/20 19:14:38 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char*)ft_memalloc(len + 1);
	if (s == NULL || start > ft_strlen(s) || str == NULL)
		return (NULL);
	while (i < len && s[start])
		str[i++] = s[start++];
	return (str);
}
