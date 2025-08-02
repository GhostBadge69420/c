#include <stdio.h>

int main() {

    char name[25];
    int age;

    printf("What's your name?");
    scanf("%s", &name);

    printf("\nHello %s, how are you?", name);

    return 0;
}