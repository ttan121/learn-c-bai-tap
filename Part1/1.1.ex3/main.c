#include <stdio.h>
#define pi 3.14
double p(double r)
{
    double kq=2*pi*r;
    return kq;
}
double a(double r)
{
    double kq=pi*r*r;
    return kq;
}
int main()
{
    double r;
    scanf("%lf", &r);
    printf("perimeter of a circle is: %.2lf\n", p(r));
    printf("area of a circle is: %.2lf\n", a(r));
    return 0;
}
