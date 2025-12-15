#include <stdio.h>

int main()
{
    int a, b, c, d, x=0;
    scanf("%i %i %i %i", &a, &b, &c, &d);
    if (a>x) x=a;
    if (b>x) x=b;
    if (c>x) x=c;
    if (d>x) x=d;
    printf ("%i", x);
    return 0;
}
