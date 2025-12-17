#include <stdio.h>

int main()
{
    int n;
    while (1)
    {
        scanf("%i",&n);
        if (n>=0 && n<=86399)
        {
            int second, minute, hour;
            hour=n/3600;
            minute=(n%3600)/60;
            second=n%60;
            printf("%02i:%02i:%02i", hour, minute, second);
            break;
        }
        else printf("Error value please re-enter value !\n");
    }
    return 0;
}
