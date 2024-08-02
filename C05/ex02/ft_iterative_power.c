/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:07:37 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/30 10:07:50 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	int	number;
	int 	power;
	
	number = 2;
	power = 3;
	printf("%d\n", ft_iterative_power(number, power));
	number = 3;
	power = -2;
	printf("%d\n", ft_iterative_power(number, power));
	number = 2;
	power = 0;
	printf("%d\n", ft_iterative_power(number, power));
	number = 0;
	power = 3;
	printf("%d\n", ft_iterative_power(number, power));
}*/
