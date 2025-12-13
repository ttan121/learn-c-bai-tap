#include <stdio.h>
#include <math.h>
double area (double a, double b, double c)
{
    double p = (a+b+c)/2;
    double s = sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}
int main()
{
    double a, b, c;
    //while(1)
    //{
        scanf("%lf %lf %lf", &a, &b, &c);
        //if ((a+b>c) && (a+c>b) && (b+c>a) && a>=0 && b>=0 && c>=0)
        //{
            printf("area is: %.2lf", area(a,b,c));
            //break;
        //}
        //else printf("Value error please re-enter value ! \n");
    //}
    return 0;
}
