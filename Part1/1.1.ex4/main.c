#include <stdio.h>
#define pi 3.14
double a(double r)
{
    double kq=4*pi*(r*r);
    return kq;
}
double v(double r)
{
    double kq=(4.0/3.0)*pi*(r*r*r);
    return kq;
}
int main()
{
    while (1)
    {
        double r;
        scanf("%lf",&r);
        if(r>0)
        {
            printf("the area of a sphere is: %.2lf\n", a(r));
            printf("the volume of a sphere is: %.2lf", v(r));
            break;
        }
        else printf("the value error please re-enter value !\n");
    }
    return 0;
}
