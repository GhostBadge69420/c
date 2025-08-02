#include <stdio.h>

int main()
{

    int a = 'X';
    int b = 'Y';
    int c = 'Z';

    printf("%ld bytes\n", sizeof(a));
    printf("%ld bytes\n", sizeof(b));
    printf("%ld bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    return 0;

}