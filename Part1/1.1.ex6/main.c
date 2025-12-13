#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    scanf("%i",&a);
    int b=pow(a,2), c=pow(a,3), d=pow(a,4);
    printf("a^2=%i\n",b);
    printf("a^3=%i\n",c);
    printf("a^4=%i\n",d);
    return 0;
}
