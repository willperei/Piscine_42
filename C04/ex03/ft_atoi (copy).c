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
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13 ) || str[i] == 32)//enquanto tiver tab, espaço e nova linha percorra a string.
		i++;
	while ((str[i] == 43 || str[i] == 45))//usando a posiçao anterior, enquanto o valor da posiçao i da string = + ou -, faça
	{
		if (str[i] == 45)//se o valor da posiçao for + faça, converta para - 
			conversion *= -1;
		i++;//percorre todos os valores da string
	}
	*pointer_i = i;//armazena o valor atual de i no ponteiro
	return (count);//retorna 1 ou -1
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = whitespaces(str, &i); //chama o whitespaces para pular espaços e sinais, atualizar o i e obter o sinal
	while (str[i] && str[i] >= 48 && str[i] <= 57)//enquanto valores da string posicao i forem numero >= 0 e <= 9 faça
	{
		result *= 10;//Multiplica o resultado atual por 10 para deslocar os dígitos
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}
    
int	main(void)
{
	char *str1 = "   -1234";
	char *str2 = " +5678";
	char *str3 = "  42";
	char *str4 = "   0";
	char *str5 = "   -0";

	printf("String: '%s' => Integer: %d\n", str1, ft_atoi(str1));
	printf("String: '%s' => Integer: %d\n", str2, ft_atoi(str2));
	printf("String: '%s' => Integer: %d\n", str3, ft_atoi(str3));
	printf("String: '%s' => Integer: %d\n", str4, ft_atoi(str4));
	printf("String: '%s' => Integer: %d\n", str5, ft_atoi(str5));

	return (0);
}
