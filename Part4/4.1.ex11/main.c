#include <stdio.h>
#include <math.h>
double pi_4 (double *ep)
{
    double sum=1;
    double phan_tu=0;
    int n=1;
    do
    {
        phan_tu=pow(-1, n) * 1.0 / (2*n + 1);
        sum+=phan_tu;
        n++;
    }
    while (fabs(phan_tu) > *ep);
    return sum*4;
}

int main()
{
    double ep;
    printf("enter epsion: \n");
    scanf("%lf", &ep);
    printf("%lf", pi_4(&ep));
    return 0;
}
