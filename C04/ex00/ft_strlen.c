/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:44:37 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/24 17:44:42 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	tamanho;

	tamanho = 0;
	while (str[tamanho] != '\0')
	{
		tamanho++;
	}
	return (tamanho);
}
/*
int	main(void)
{
	char	*str;
	int		tamanho;

	str = "Quero cafe!";
	tamanho = ft_strlen(str);
	printf("Length of the string: %d\n", tamanho);
	return (0);
}*/
