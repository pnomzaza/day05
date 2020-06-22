/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:12:36 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/22 17:26:49 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <strings.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)

	
	{
		unsigned int i;

	i = -1;
	while(++i < n)
	{
	 if (src[i] == '\0')
 		 dest[i] = '\0';	 
	 else
		 dest[i] = src[i];
	}

	return (dest);
	
	}


