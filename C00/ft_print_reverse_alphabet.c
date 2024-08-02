/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:55:54 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/12 10:34:27 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	short	c;

	c = 122;
	while (c > 96)
	{
		write(1, &c, 1);
		--c;
	}
}

//int	main(void)
//{
//	ft_print_alphabet();
//	write(1, "\n", 1);
//}
