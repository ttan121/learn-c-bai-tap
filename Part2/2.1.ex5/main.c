#include <stdio.h>

int main()
{
    int a, b, c, d=0;
    scanf("%i %i %i",&a,&b,&c);
    if (a>d)
        d=a;
    if (b>d)
        d=b;
    if (c>d)
        d=c;
    printf("%i", d);
    return 0;
}
