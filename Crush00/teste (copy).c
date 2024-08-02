/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:00:22 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/13 14:00:28 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Função para escrever um único caractere na saída padrão
void ft_putchar(char c) {
    write(1, &c, 1);
}

// Função rush para desenhar a forma especificada
void rush(int x, int y) {
    int cx = 1; // contador para linhas
    int cy; // contador para colunas

    while (cx <= x) {
        cy = 1; // reinicia o contador de colunas para cada linha
        while (cy <= y) {
            if (cx == 1) {
                // Primeira linha
                if (cy == 1) {
                    ft_putchar('A');
                } else if (cy == y) {
                    ft_putchar('C');
                } else {
                    ft_putchar('B');
                }
            } else if (cx == x) {
                // Última linha
                if (cy == 1) {
                    ft_putchar('C');
                } else if (cy == y) {
                    ft_putchar('A');
                } else {
                    ft_putchar('B');
                }
            } else {
                // Linhas do meio
                if (cy == 1 || cy == y) {
                    ft_putchar('B');
                } else {
                    ft_putchar(' ');
                }
            }
            cy++;
        }
        ft_putchar('\n'); // adiciona nova linha após cada linha completa
        cx++;
    }
}

// Função main para inicializar x e y e chamar rush
int main(void) {
    int x = 3; // Número de linhas
    int y = 5; // Número de colunas

    rush(x, y); // Chamando a função rush com x e y inicializados
    return 0;
}
