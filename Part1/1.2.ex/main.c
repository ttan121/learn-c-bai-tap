#include <stdio.h>
int main()
{
    int a;
    do
    {
        scanf("%i", &a);
        if (a>=100 && a<=999)
        {
            printf("The hundredth digit: %i \nThe tenth digit: %i \nThe last digit: %i \n", a/100, (a/10)%10, a%10);
            break;
        }
        else printf("Value error please re-enter value !\n");
    }
    while (1);
    return 0;
}
