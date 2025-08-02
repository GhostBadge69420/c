#include <stdio.h>

int main()
{

    char a;
    double b[3];

    printf("%ld bytes\n", sizeof(a));
    printf("%ld bytes\n", sizeof(b));

    printf("%p\n", &a);
    printf("%p\n", &b);

    return 0;

}