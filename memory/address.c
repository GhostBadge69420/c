#include <stdio.h>

int main()
{

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    return 0;
}