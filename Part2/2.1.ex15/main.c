#include <stdio.h>

int main()
{
    int a, b, c;
    while (1)
    {
        scanf("%i %i %i", &a, &b, &c);
        if (a+b>c && a+c>b && c+b>a && a>0 && b>0 && c>0)
        {
            if (a*a==(b*b)+(c*c)
                || b*b==(a*a)+(c*c)
                || c*c==(a*a)+(b*b)) printf("Is a right triangle");
            else printf("Is not a right triangle");
            break;
        }
        else printf("Error value please re-enter value !\n");
    }
    return 0;
}
