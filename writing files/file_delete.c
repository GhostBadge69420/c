#include <stdio.h>

int main()
{

    if(remove("test.txt") == 0)
    {
        printf("That file was deleted successfully!");
    }
    else
    {
        printf("That file was NOT deleted!");
    }

    return 0;
}