#include <stdio.h>

int main()
{
    unsigned long long n;
    do
    {
        scanf("%llu", &n);
        if (n>=0)
        {
            if (n%2==0)
                printf("%llu it is an even", n);
            else
                printf("%llu it is an odd", n);
            break;
        }
        else printf("Error value please re-enter value !");
    }
    while (1);
    return 0;
}
