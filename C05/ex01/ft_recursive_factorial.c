/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:07:37 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/30 10:07:50 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	int	number;
	
	number = 4;
	printf("%d\n", ft_recursive_factorial(number));
	number = -3;
	printf("%d\n", ft_recursive_factorial(number));
	number = 0;
	printf("%d\n", ft_recursive_factorial(number));
}*/
