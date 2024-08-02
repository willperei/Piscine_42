/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:45:54 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/30 16:45:58 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	if (nb % 2 == 0)
	{
		return (0);
	}
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	number;
	
	number = -5;
	printf("%d\n", ft_is_prime(number));
	number = 3;
	printf("%d\n", ft_is_prime(number));
	number = 19;
	printf("%d\n", ft_is_prime(number));
}*/
