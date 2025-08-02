#include <stdio.h>

int main()
{
    FILE *pF = fopen("test.txt", "w");

    fprintf(pF, "Neal Riggers");

    fclose(pF);

    return 0;
}