#include <stdio.h>

int main()
{
    char name[] = "Coco";
    int age = 69;

    hello(name);

    return 0;
}

void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}
