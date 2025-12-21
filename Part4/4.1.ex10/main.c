#include <stdio.h>
#include <math.h>

double ln(double x, double ep)
{
    double sum = 0;
    double phan_tu = x;
    int i = 1;
    while (fabs(phan_tu) > ep)
    {
        phan_tu = pow(-1, i - 1) * pow(x, i) / i;
        sum += phan_tu;
        i++;
    }
    return sum;
}

int main()
{
    double x, ep;
    printf("Nhap x va epsilon: \n");
    scanf("%lf %lf", &x, &ep);
    printf("ln(1 + %.2lf) ~ %.10lf\n", x, ln(x, ep));
    return 0;
}
