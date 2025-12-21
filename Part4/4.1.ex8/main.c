#include <stdio.h>
#include <math.h>
long long giai_thua (int n)
{
    long long kq=1;
    for (int i=1; i<=n; i++)
    {
        kq*=i;
    }
    return kq;
}
double sinn(double x, double ep)
{
    double sum=x;
    double phan_tu=x;
    int n = 1;
    while (fabs(phan_tu) > ep)
    {
        phan_tu=pow(-1, n) * pow(x, 2*n + 1) / giai_thua(2*n + 1);
        sum += phan_tu;
        n++;
    }
    return sum;
}
int main()
{
    double x, ep;
    printf("Enter x and epsion: \n");
    while (1)
    {
        scanf("%lf %lf",&x,&ep);
        if (ep>0)
        {
            printf("Sin(%.0lf) ~ %lf \n",x,sinn(x,ep));
            break;
        }
        else
            printf("error epsion please re-enter !\n");
    }
}
