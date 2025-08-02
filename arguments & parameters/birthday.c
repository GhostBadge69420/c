#include <stdio.h>

void birthday(char name[], int age)
{
    printf("\nHappy birthday to you dear %s!", name);
    printf("\nYou are %d years old!", age);
}

int main()
{
    char name[] = "Nigga";
    int age = 69;
    birthday(name, age);

    return 0;
}