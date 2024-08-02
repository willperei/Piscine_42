/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:57:38 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/24 17:50:36 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	w;

	i = 0;
	w = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (w < nb && src[w] != '\0')
	{
		dest[i + w] = src[w];
		w++;
	}
	dest[i + w] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest1[11] = "Quero";
	char	src[] = " Cafe Agora";
	char	dest2[11] = "Quero";

	printf("Src: %s\n", src);
	printf("Dest: %s\n", dest1);
	printf("Dest2: %s\n", dest2);
	printf("strncat 4 bytes: %s\n", strncat(dest1, src, 4));
	printf("ft_strncat 5 bytes: %s\n", ft_strncat(dest2, src, 5));
}*/
