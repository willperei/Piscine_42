/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:58:01 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/17 11:17:05 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	value;

	value = 0;
	while (src[value] != '\0')
	{
		dest[value] = src[value];
		value++;
	}
	dest[value] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*src;
	char	dest[13];

	src = "Hello World!";
	printf("src-src: %s\n", src);
	strcpy(dest, src);
	printf("Native-Strcpy: %s\n", dest);
	ft_strcpy(dest, src);
	printf("Ft_cpy-dest: %s\n", dest);
}*/
