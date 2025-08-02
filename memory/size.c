#include <stdio.h>

int main()
{

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%ld bytes\n", sizeof(a));
    printf("%ld bytes\n", sizeof(b));
    printf("%ld bytes\n", sizeof(c));

    return 0;
}