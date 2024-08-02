/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:01:08 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/29 16:01:11 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	whitespaces(char *str, int *pointer_i)
{
	int	conversion;
	int	i;

	i = 0;
	conversion = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			conversion *= -1;
		i++;
	}
	*pointer_i = i;
	return (conversion);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = whitespaces(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}
/*    
int	main(void)
{
	char *str1 = "   -1234";
	char *str2 = " +5678";
	char *str3 = "	42";
	char *str4 = "   0";
	char *str5 = "   -0";

	printf("String: '%s' => Integer: %d\n", str1, ft_atoi(str1));
	printf("String: '%s' => Integer: %d\n", str2, ft_atoi(str2));
	printf("String: '%s' => Integer: %d\n", str3, ft_atoi(str3));
	printf("String: '%s' => Integer: %d\n", str4, ft_atoi(str4));
	printf("String: '%s' => Integer: %d\n", str5, ft_atoi(str5));

	return (0);
}*/
