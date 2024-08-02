/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:55:54 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/11 17:10:39 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	short	c;

	c = 96;
	while (c++ < 122)
		write(1, &c, 1);
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
