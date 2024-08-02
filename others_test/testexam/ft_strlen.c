/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:46:21 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/25 17:46:23 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	comp;

	comp = 0;
	while (str[comp] != '\0')
	{
		comp++;
	}
	return (comp);
}
/*
int	main(void)
{
	char	*msg;
	int	comp;
	
	msg = "ola!";
	comp = ft_strlen(msg);
	printf("Tamanho da string : %d\n", comp);
}*/
