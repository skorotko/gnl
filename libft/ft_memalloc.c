/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:52:36 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/20 18:33:33 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	str = NULL;
	str = (void*)malloc(sizeof(*str) * (size));
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
