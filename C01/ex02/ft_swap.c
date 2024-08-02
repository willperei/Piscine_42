/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:25:36 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/16 10:28:14 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	w;

	w = *a;
	*a = *b;
	*b = w;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("antes/before: %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("depois/after: %d %d\n", a, b);
}*/
