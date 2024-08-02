/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:17:59 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/22 18:18:03 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0') // Verifica se a string está vazia
	return (1);
	
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str [i] <= 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_str_is_lowercase(""));
	printf("\n%d", ft_str_is_lowercase("57565446441"));
	printf("\n%d", ft_str_is_lowercase("sdsdcsdlkc"));
}
