/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:21:31 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/11 16:37:28 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	short	n;	

	n = 47;
	while (++n < 58)
		write(1, &n, 1);
}

int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
}
