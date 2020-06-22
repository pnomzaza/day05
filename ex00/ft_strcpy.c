/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:07:08 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/22 14:12:22 by pnomzaza         ###   ########.fr       */
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

int main()
{
	char src[100];
	char dest[100];

	puts("Enter source string\n");
	gets(src);
	strcpy(dest, src);
    putchar("Target string is \"%s\"\n", dest);

	return (0);
}
