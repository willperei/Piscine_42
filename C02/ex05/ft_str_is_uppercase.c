/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:36:20 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/23 08:27:49 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str [i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_uppercase(""));
	printf("\n%d", ft_str_is_uppercase("57565446441"));
	printf("\n%d", ft_str_is_uppercase("SAFTGH"));
}*/
