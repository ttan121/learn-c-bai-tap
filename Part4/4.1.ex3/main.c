#include <stdio.h>
#include <math.h>
void fx (double x)
{
    if (x<=0)
        printf("f(x)=0");
    else if (0<x && x<=2)
        printf("f(x)=%.3lf",(x*x-x));
    else if (x>2)
        printf("f(x)=%.3lf",(x*x-sin(M_PI*x*x)));
}
int main()
{
    double x;
    scanf("%lf",&x);
    fx(x);
    return 0;
}
