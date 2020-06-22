/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:07:08 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/22 14:21:59 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>



char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while( src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest [i] ='\0';

	return (dest);
}


