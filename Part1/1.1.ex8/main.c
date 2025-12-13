#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%i %i",&a,&b);
    c=a;
    a=b;
    b=c;
    printf ("%i %i", a, b);
    return 0;
}
