#include <stdio.h>

int main()
{
    int second, minute, hour;
    while (1)
    {
        scanf("%i %i %i",&hour,&minute,&second);
        if (second>=0 && second<=60 && minute>=0 && minute<=60 && hour>=0 && hour<=24)
        {
            printf("%i hour %i minute %i second ", hour, minute, second);
            break;
        }
        else printf("Error value please re-enter value ! \n");
    }
    return 0;
}
