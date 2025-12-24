#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check_nt(int n)
{
    if (n<2)
        return false;
    else
    {
        for (int i=2; i<n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
bool check_cp(int n)
{
    int c=(int)sqrt(n);
    if (c*c==n)
        return true;
    else
        return false;
}
int sum(int n)
{
    int sum=0;
    while (n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n, sum_nt=0, sum_cp=0, sum_snt=0, sum_scp=0;
    scanf("%i",&n);
    int a[n];
    for (int i=0; i<n; i++)
        scanf("%i",&a[i]);
    for (int i=0; i<n; i++)
    {
        if (check_nt(a[i]))
        {
            sum_snt=0;
            sum_snt=sum(a[i]);
            printf("%i ", a[i]);
            printf("tong chu so %i \n",sum_snt);
            sum_nt+=a[i];
        }
    }
    printf("tong cac so nguyen to la: %i", sum_nt);
    for (int i=0; i<n; i++)
    {
        if (check_cp(a[i]))
        {
            sum_scp=0;
            sum_scp=sum(a[i]);
            printf("%i "), a[i]);
            printf("tong chu so %i \n",sum_scp)
            sum_cp+=a[i];
        }
    }
    printf("tong cac so chinh phuong la: %i", sum_cp);
    return 0;
}
