/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:36:20 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/23 08:27:49 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Função que converte todos os caracteres minúsculos de uma string para maiúsculos
char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char str[] = "quero cafe"; // Declaração e atribuição inicial correta

    printf("%s", ft_strupcase(str));
    return (0);
}

