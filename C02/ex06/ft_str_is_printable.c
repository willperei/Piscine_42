/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:36:20 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/23 08:27:49 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 & str [i] <= 126))
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
	printf("%d", ft_str_is_printable(""));
	printf("\n%d", ft_str_is_printable("\t"));
	printf("\n%d", ft_str_is_printable("57565446441"));
	printf("\n%d", ft_str_is_printable("SAFTGH"));
}*/
