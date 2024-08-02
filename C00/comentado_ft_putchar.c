#include <unistd.h>

// Function declaration
void ft_putchar(char c);

int main() {
    // Example usage of ft_putchar
    ft_putchar('H');
    ft_putchar('e');
    ft_putchar('l');
    ft_putchar('l');
    ft_putchar('o');
    ft_putchar('\n');

    return 0;
}

// Function definition
void ft_putchar(char c) {
    write(1, &c, 1);
}

