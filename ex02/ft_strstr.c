/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:31:31 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/24 11:24:31 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <strings.h>

char*ft_strstr(char *str, char *to_find)
{
	char *begin;
	char *to_find_cp;

	if(*to_find == '\0')
		return(0);
	
	while(*str != '\0')
	{
		begin = str;
		to_find_cp = to_find;

		while(*to_find_cp == *str)
		{
			++str;
			++to_find_cp;
		}
		if (to_find_cp == '\0')
			return(begin);
		str = begin + 1;

	}
	return((char*)0);
}
