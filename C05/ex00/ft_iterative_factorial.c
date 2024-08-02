/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:07:37 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/30 10:07:50 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*int	main(void)
{
	int	number;
	
	number = 4;
	printf("%d\n", ft_iterative_factorial(number));
	number = -3;
	printf("%d\n", ft_recursive_factorial(number));
	number = 0;
	printf("%d\n", ft_recursive_factorial(number));
}*/
