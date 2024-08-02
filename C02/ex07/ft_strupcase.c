/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:23:36 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/23 09:23:39 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "quero cafe";

	printf("%s", ft_strupcase(str));
	return (0);
}*/
