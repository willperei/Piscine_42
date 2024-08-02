/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:14:18 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/24 11:14:20 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && (*s1 == *s2) && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *) s1 - *(unsigned char *) s2);
}
/*int	main(void)
{
	char *str1;
	char *str2;

	str1 = "Quero";
	str2 = "Cafe";
	printf("strncmp : %d\n", strncmp(str1, str2, 0));
	printf("ft : %d\n", ft_strncmp(str1, str2, 0));
	
	str1 = "Quero-quero";
	str2 = "Quero-Quero";
	printf("strncmp : %d\n", strncmp(str1, str2, 7));
	printf("ft : %d\n", ft_strncmp(str1, str2, 7));
	
	return (0);
}*/
