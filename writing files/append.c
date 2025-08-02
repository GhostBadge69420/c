#include <stdio.h>

int main()
{
    FILE *pF = fopen("test.txt", "a");

    fprintf(pF, "\nBuck Flacks");

    fclose(pF);

    return 0;
}