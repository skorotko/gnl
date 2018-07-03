/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 10:08:15 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/24 12:39:42 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word(const char *str, char c)
{
	int	w;
	int	z;

	w = 0;
	z = 0;
	if (!str)
		return (0);
	while (*str != '\0')
	{
		str++;
		while (*str != c && *str != '\0')
		{
			w = 1;
			str++;
		}
		if (w == 1)
			z++;
		w = 0;
	}
	return (z);
}

static char		*ft_character(const char *str, char c)
{
	int		w;
	char	*std;

	w = 0;
	while (*str && *str == c)
		str++;
	while (*str != c && *str != '\0')
	{
		w++;
		str++;
	}
	std = (char*)malloc(sizeof(char) * (w + 1));
	if (!std)
		return (NULL);
	return (std);
}

char			**ft_strsplit(char const *s, char c)
{
	int		n;
	int		i;
	int		z;
	char	**str;

	n = 0;
	i = 0;
	z = ft_word(s, c);
	str = (char**)malloc(sizeof(char*) * (z + 1));
	if (!str)
		return (NULL);
	str[z] = 0;
	while (z > 0)
	{
		while (*s && *s == c)
			s++;
		str[i] = ft_character(s, c);
		while (*s && *s != c)
			str[i][n++] = *s++;
		str[i][n] = '\0';
		n = 0;
		i++;
		z--;
	}
	return (str);
}
