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

void ft_putchar(char c) {
    write(1, &c, 1);
}

void rush(int x, int y) {
    int cx = 1, cy;
    while (cx <= x) {
        cy = 1;
        while (cy <= y) {
            if (cx == 1 && cy == 1) ft_putchar('A');
            else if (cx == 1 && cy == y) ft_putchar('C');
            else if (cx == x && cy == 1) ft_putchar('C');
            else if (cx == x && cy == y) ft_putchar('A');
            else if (cx == 1 || cx == x) ft_putchar('B');
            else if (cy == 1 || cy == y) ft_putchar('B');
            else ft_putchar(' ');
            cy++;
        }
        ft_putchar('\n');
        cx++;
    }
}

int main(void) {
    int x = 3;
    int y = 5;

    rush(x, y);
    return 0;
}
