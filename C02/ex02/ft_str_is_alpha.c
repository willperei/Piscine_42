/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:06:48 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/22 15:06:52 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!is_alpha(str[i]))
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
	printf("%d", ft_str_is_alpha("abcdefghijkl"));
	printf("\n%d", ft_str_is_alpha("AAAAAsdasdsa"));
	printf("\n%d", ft_str_is_alpha("-_134556efghij67"));
	printf("\n%d", ft_str_is_alpha(""));
	return (0);
}*/
