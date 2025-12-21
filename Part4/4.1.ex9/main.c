#include <stdio.h>
#include <math.h>
long long giai_thua(int n)
{
    long long kq=1;
    for (int i=1; i<=n; i++)
        kq*=i;
    return kq;
}
double coss(double x, double ep)
{
    double sum=1;
    double phan_tu=1;
    int n=1;
    while (fabs(phan_tu) > ep)
    {
        phan_tu=pow(-1, n) * (pow(x, 2*n) / giai_thua(2*n));
        sum+=phan_tu;
        n++;
    }
    return sum;
}
int main ()
{
    double x, ep;
    printf("enter x and epsion: \n");
    while(1)
    {
        scanf("%lf %lf", &x, &ep);
        if (ep>0)
        {
            printf("cos(%.0lf) ~ %lf \n", x, coss(x, ep));
            break;
        }
        else
            printf("error epsion please re-enter !\n");
    }
}
