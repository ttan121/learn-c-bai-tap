#include <stdio.h>

int main()
{
    int a, b, c;
    while (1)
    {
        scanf("%i %i %i", &a, &b, &c);
        if (a+b>c && a+c>b && c+b>a && a>0 && b>0 && c>0)
        {
            if (a==b && c==b) printf("is equilateral triangle");
            else printf("is don't equilateral triangle");
            break;
        }
        else printf("Error value please re-enter value !\n");
    }
    return 0;
}
