/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 15:44:06 by skorotko          #+#    #+#             */
/*   Updated: 2017/12/22 15:44:08 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char const **argv)
{
	int fd;
	int fd2;
	char *s;

	fd = open (argv[1], O_RDONLY);
	fd2 = open (argv[2], O_RDONLY);
	/*get_next_line(fd, &s);*/
	get_next_line(fd, &s);	
	printf("%s\n", s);
	get_next_line(fd, &s);	
	printf("%s\n", s);
	get_next_line(fd, &s);	
	printf("%s\n", s);
	get_next_line(fd, &s);	
	printf("%s\n", s);
/*	get_next_line(fd2, &s);	
	printf("%s\n", s);
	get_next_line(fd2, &s);	
	printf("%s\n", s);
	get_next_line(fd2, &s);	
	printf("%s\n", s);*/
	/*system("leaks a.out");*/
	return (0);
}