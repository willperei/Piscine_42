/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:29:07 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/23 15:29:09 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *) s1 - *(unsigned char *) s2);
}
/*
int	main(void)
{
	char *str1;
	char *str2;

	str1 = "Quero";
	str2 = "Cafe";
	printf("Strcmp : %d\n", strcmp(str1, str2));
	printf("ft_strcmp : %d\n", ft_strcmp(str1, str2));
	str1 = "Quero-Quero";
	str2 = "Quero-Quero";
	printf("Strcmp : %d\n", strcmp(str1, str2));
	printf("ft_strcmp : %d\n", ft_strcmp(str1, str2));
	
}*/
