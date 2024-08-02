/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:44:37 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/24 17:44:42 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*w1;
	char	*w2;

	w1 = str;
	w2 = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		while (*w1 != '\0' && *w2 != '\0' && *w1 == *w2)
		{
			w1++;
			w2++;
		}
		if (*w2 == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Quero cafe! Quero Cafe!";
	char	find[] = "cafe";
	char	*result = ft_strstr(str, find);

	if (result != NULL)
	{
		printf("Found the substring: %s\n", result);
	}
	else
	{
		printf("Not found substring\n");
	}
	return (0);
}*/
