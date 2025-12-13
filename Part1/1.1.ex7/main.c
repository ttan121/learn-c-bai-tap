#include <stdio.h>
double stb(double a, double b, double c, double d)
{
    double sum=a+b+c+d;
    double kq=sum/4.0;
    return kq;
}
int main()
{
    double a, b, c, d;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    printf("the average of four numbers is: %.2lf", stb(a,b,c,d));
    return 0;
}
