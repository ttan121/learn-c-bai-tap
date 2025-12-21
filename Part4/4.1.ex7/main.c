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
double S1(int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        double mau_so = 0;
        for (int j = 1; j <= i; j++)
        {
            mau_so += j * j;
        }
        sum += pow(-1, i + 1) / mau_so;
    }
    return sum;
}
double S3(int n, double x)
{
    double kq = 0;
    for (int i = 1; i <= n; i++)
        kq = sqrt(kq + x);
    return kq;
}
double S4(int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        double mau_so=0;
        for(int j=1; j<=i; j++)
        {
            mau_so += j*j;
        }
        sum += 1 / mau_so;
    }
    return sum;
}
double S5(int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        double mau_so=0;
        mau_so=i*2;
        sum+=pow(-1,(i+1))/mau_so;
    }
    return sum;
}
double S6(int n)
{
    double sum = 0;
    for (int i=1; i<=n; i++)
    {
         double mau_so=0;
         for(int j=1; j<=i; j++)
         {
             mau_so+=j;
         }
         sum+=pow(-1,(i+1))/mau_so;
    }
    return sum;
}
double S7(int n)
{
    double sum = 1;
    for (int i = 1; i <= n; i++)
        sum += pow(2, i) / giai_thua(i);
    return sum;
}
double S8(int n)
{
    double sum = 0;
    for(int i=1; i<=n; i++)
        sum +=pow(-1,i+1)/giai_thua(i);
    return sum;
}
int main()
{
    int n;
    double x;
    printf("Enter n : \n");
    while (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input, re-enter n: ");
        while (getchar() != '\n');
    }
    printf("Enter x (for S3): ");
    scanf("%lf", &x);
    printf("S1 = %.10lf\n", S1(n));
    printf("S3 = %.10lf\n", S3(n, x));
    printf("S4 = %.10lf\n", S4(n));
    printf("S5 = %.10lf\n", S5(n));
    printf("S6 = %.10lf\n", S6(n));
    printf("S7 = %.10lf\n", S7(n));
    printf("S8 = %.99lf\n", S8(n));
    return 0;
}
