#include <stdio.h>

int main()
{

    int number = 0;
    int sum  = 0;

    while(number > 0)
    {
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        if(number > 0)
        {
            sum += number;
        }
    }

    printf("sum: %d", sum);

    return 0;
}