/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:57:36 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/30 14:57:39 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	int	index;

	index = 0;
	printf("ft_fibonacci(%d) = %d\n", index, ft_fibonacci(index));
	index = 1;
	printf("ft_fibonacci(%d) = %d\n", index, ft_fibonacci(index));
	index = 6;
	printf("ft_fibonacci(%d) = %d\n", index, ft_fibonacci(index));
	index = 10;
	printf("ft_fibonacci(%d) = %d\n", index, ft_fibonacci(index));
	index = -1;
	printf("ft_fibonacci(%d) = %d\n", index, ft_fibonacci(index));
	return (0);
}*/
