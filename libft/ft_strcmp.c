/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:22:47 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/24 12:41:29 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*std1;
	unsigned char	*std2;
	int				i;

	i = 0;
	std1 = (unsigned char*)s1;
	std2 = (unsigned char*)s2;
	while (std1[i] != '\0' || std2[i] != '\0')
	{
		if (std1[i] > std2[i])
			return (std1[i] - std2[i]);
		if (std1[i] < std2[i])
			return (std1[i] - std2[i]);
		i++;
	}
	return (0);
}
