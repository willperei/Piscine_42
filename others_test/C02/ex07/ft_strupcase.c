/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:36:20 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/23 08:27:49 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str [i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int	main()
{
	char	str[] = "errrou, rude!";
	printf("\%s", ft_strupcase(str));
}
