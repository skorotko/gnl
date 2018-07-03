/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 13:37:39 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/22 20:21:25 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *i;

	if (!alst || !*alst || !del)
		return ;
	while (*alst)
	{
		i = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = i;
	}
	*alst = NULL;
	return ;
}
