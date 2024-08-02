/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:57:36 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/30 14:57:39 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Função recursiva para calcular o n-ésimo número de Fibonacci
int ft_fibonacci(int index) {
    // Caso para índices negativos
    if (index < 0) {
        return -1;
    }

    // Caso base para o primeiro e segundo número na sequência de Fibonacci
    if (index == 0) {
        return 0;
    }
    if (index == 1) {
        return 1;
    }

    // Chamada recursiva para calcular o número de Fibonacci
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

// Função main para testar ft_fibonacci
int main(void) {
    int index;

    // Teste 1: índice 0
    index = 0;
    printf("ft_fibonacci(%d) = %d\n", index, ft_fibonacci(index)); // Esperado: 0

    // Teste 2: índice 1
    index = 1;
    printf("ft_fibonacci(%d) = %d\n", index, ft_fibonacci(index)); // Esperado: 1

    // Teste 3: índice 5
    index = 5;
    printf("ft_fibonacci(%d) = %d\n", index, ft_fibonacci(index)); // Esperado: 5

    // Teste 4: índice 10
    index = 10;
    printf("ft_fibonacci(%d) = %d\n", index, ft_fibonacci(index)); // Esperado: 55

    // Teste 5: índice negativo
    index = -1;
    printf("ft_fibonacci(%d) = %d\n", index, ft_fibonacci(index)); // Esperado: -1

    return 0;
}

