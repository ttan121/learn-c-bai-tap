#include <stdio.h>
#include <math.h>
int s(int n)
{
    int sum=0;
    for (int i=1; i<=n; i++)
    {
        sum+=i*i;
    }
    return sum;
}
int main()
{
    int n;
    double sum=0;
    printf("Enter n: ");
    scanf("%i", &n);
    for (int i=1; i<=n; i++)
    {
        double tu=pow((-1), i+1);
        double mau=(double)s(i);
        sum += tu / mau;
    }
    printf("result is %.3lf", sum);
}