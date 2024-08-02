/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:13:49 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/13 18:01:31 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_line(char first, char middle, char last, int length)
{
	int	i;

	ft_putchar(first);
	i = 1;
	while (i < length - 1)
	{
		ft_putchar(middle);
		i++;
	}
	if (length > 1)
		ft_putchar(last);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	print_line('A', 'B', 'C', x);
	i = 1;
	while (i < y - 1)
	{
		print_line('B', ' ', 'B', x);
		i++;
	}
	if (y > 1)
		print_line('C', 'B', 'A', x);
}

int	main(void)
{
	rush(5, 3);
	rush(5, 1);
	rush(1, 1);
	rush(1, 5);
	rush(4, 4);
	return (0);
}
