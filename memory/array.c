#include <stdio.h>

int main()
{

    char a;
    char b[1];

    printf("%ld bytes\n", sizeof(a));
    printf("%ld bytes\n", sizeof(b));

    printf("%p\n", &a);
    printf("%p\n", &b);

    return 0;

}