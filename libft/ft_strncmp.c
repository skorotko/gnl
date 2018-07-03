/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:58:04 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/21 13:43:31 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*std1;
	unsigned char	*std2;
	size_t			i;

	std1 = (unsigned char*)s1;
	std2 = (unsigned char*)s2;
	i = 0;
	while ((i < n) && (std1[i] || std2[i]))
	{
		if (std1[i] > std2[i])
			return (std1[i] - std2[i]);
		if (std1[i] < std2[i])
			return (std1[i] - std2[i]);
		i++;
	}
	return (0);
}
