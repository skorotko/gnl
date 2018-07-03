/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 18:50:49 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/20 20:13:41 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		k;
	int		d;
	char	*str;

	i = 0;
	k = 0;
	d = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[k])
		k++;
	while (s[k - 1] == ' ' || s[k - 1] == '\n' || s[k - 1] == '\t')
		k--;
	if (k == 0)
		return (ft_strnew(1));
	str = (char*)ft_memalloc((k - i) + 1);
	if (str == NULL)
		return (str);
	while (i < k)
		str[d++] = s[i++];
	str[d] = '\0';
	return (str);
}
