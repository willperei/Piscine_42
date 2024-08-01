/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:55:54 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/15 10:31:07 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	short	c;

	c = 123;
	while (--c > 96)
	{
		write(1, &c, 1);
	}
}

//int	main(void)
//{
//	ft_print_reverse_alphabet();
//	write(1, "\n", 1);
//}
