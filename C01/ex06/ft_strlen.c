/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:59:28 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/16 18:12:44 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/*int	main(void)
{
	char	*msg;
	int		length;

	msg = "Hello, word!";
	length = ft_strlen(msg);
	printf("The length of the string is: %d\n", length);
	return (0);
}*/
