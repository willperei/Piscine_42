/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:07:37 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/30 10:07:50 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	int	number;
	int 	power;
	
	number = 2;
	power = 4;
	printf("%d\n", ft_recursive_power(number, power));
	number = 3;
	power = -2;
	printf("%d\n", ft_recursive_power(number, power));
	number = 2;
	power = 0;
	printf("%d\n", ft_recursive_power(number, power));
	number = 0;
	power = 3;
	printf("%d\n", ft_recursive_power(number, power));
}*/
