/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:44:41 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/25 11:44:43 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == 2147483647)
		write (1, "2147483647", 10);
	else if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
/*
int	main(void)
{
	ft_putnbr(42);
	write (1, "\n", 1);
	ft_putnbr(-42);
	write (1, "\n", 1);
	ft_putnbr(-321783);
	write (1, "\n", 1);
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
}*/
