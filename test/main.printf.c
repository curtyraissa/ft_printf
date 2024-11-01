#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ft_count;
    int std_count;

    //%c
    ft_count = ft_printf("%c\n", 'A');  // A
    std_count = printf("%c\n", 'A');    // A
    printf("ft_printf contou: %d caracteres\n", ft_count); // 2
    printf("printf padrão contou: %d caracteres\n\n", std_count); // 2

    //%s
    ft_count = ft_printf("%s\n", "Hello, world!");  // Hello, world!
    std_count = printf("%s\n", "Hello, world!");    // Hello, world!
    printf("ft_printf contou: %d caracteres\n", ft_count); // 14
    printf("printf padrão contou: %d caracteres\n\n", std_count); // 14

    //%p
    int x = 42;
    ft_count = ft_printf("%p\n", &x);  //exemplo: 0x7ffeeaeb89c8
    std_count = printf("%p\n", &x);
    printf("ft_printf contou: %d caracteres\n", ft_count); // Varia
    printf("printf padrão contou: %d caracteres\n\n", std_count);

    //%d
    ft_count = ft_printf("%d\n", 12345);  // 12345
    std_count = printf("%d\n", 12345);    // 12345
    printf("ft_printf contou: %d caracteres\n", ft_count); // 6
    printf("printf padrão contou: %d caracteres\n\n", std_count); // 6

    //%i
    ft_count = ft_printf("%i\n", -12345);  // -12345
    std_count = printf("%i\n", -12345);    // -12345
    printf("ft_printf contou: %d caracteres\n", ft_count); // 7
    printf("printf padrão contou: %d caracteres\n\n", std_count); // 7

    //%u
    ft_count = ft_printf("%u\n", 12345);  // 12345
    std_count = printf("%u\n", 12345);    // 12345
    printf("ft_printf contou: %d caracteres\n", ft_count); // 6
    printf("printf padrão contou: %d caracteres\n\n", std_count); // 6

    //%x
    ft_count = ft_printf("%x\n", 255);  // ff
    std_count = printf("%x\n", 255);    // ff
    printf("ft_printf contou: %d caracteres\n", ft_count); // 3
    printf("printf padrão contou: %d caracteres\n\n", std_count); // 3

    //%X
    ft_count = ft_printf("%X\n", 255);  // FF
    std_count = printf("%X\n", 255);    // FF
    printf("ft_printf contou: %d caracteres\n", ft_count); // 3
    printf("printf padrão contou: %d caracteres\n\n", std_count); // 3

    //%%
    ft_count = ft_printf("%%\n");  // %
    std_count = printf("%%\n");    // %
    printf("ft_printf contou: %d caracteres\n", ft_count); // 2
    printf("printf padrão contou: %d caracteres\n\n", std_count); // 2

    return 0;
}
