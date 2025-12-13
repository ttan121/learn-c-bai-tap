#include <stdio.h>
double p(double a, double b)
{
    double kq=2*(a+b);
    return kq;
}
double ar(double a, double b)
{
    double kq=a*b;
    return kq;
}
int main()
{
    double a,b;
    printf("enter the length and width of a rectangle: \n");
    scanf("%lf %lf", &a, &b);
    printf("the perimeter is: %.2lf\n",p(a,b));
    printf("the area is: %.2lf\n",ar(a,b));
    return 0;
}
