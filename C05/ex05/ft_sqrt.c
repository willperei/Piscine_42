/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:28:45 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/30 15:28:48 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	while (i <= nb / i)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	number;
	
	number = -4;
	printf("%d\n", ft_sqrt(number));
	number = 998001;
	printf("%d\n", ft_sqrt(number));
	number = 16;
	printf("%d\n", ft_sqrt(number));
}*/
