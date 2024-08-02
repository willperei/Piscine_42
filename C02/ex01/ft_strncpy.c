/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:42:11 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/17 14:05:03 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	value;

	value = 0;
	while (value < n && src[value] != '\0')
	{
		dest[value] = src[value];
		value++;
	}
	while (value < n)
	{
		dest[value] = '\0';
		value++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*src;
	char	dest[15];

	src = "HelloWorld!";
	printf("Src: %s\n", src);
	strncpy(dest, src, 7);
	printf("Cpy : %s\n", dest);
	ft_strncpy(dest, src, 7);
	printf("Ft_strncpy : %s\n", dest);
}*/
