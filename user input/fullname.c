#include <stdio.h>
#include <string.h>

int main() {

    char name[25];
    int age;

    printf("\nWhat's your name?");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("\nHello %s, how are you?", name);

    return 0;
}