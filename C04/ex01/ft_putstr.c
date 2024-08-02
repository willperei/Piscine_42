/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:17:25 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/25 11:17:29 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}
/*
int	main(void)
{
	char	*str;

	str = "Quero Cafe!\n";
	ft_putstr(str);
}*/
