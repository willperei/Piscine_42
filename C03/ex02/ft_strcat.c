/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:57:38 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/24 11:57:44 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	w;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	w = 0;
	while (src[w] != '\0')
	{
		dest[i] = src[w];
		i++;
		w++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[11] = "Quero";
	char	src[] = " Cafe";
	char	dest1[11]= "Quero";
	
	printf("Concatenated strcat: %s\n", strcat(dest, src));
	printf("Concatenated ft_strcat: %s\n", ft_strcat(dest1, src));
}*/
