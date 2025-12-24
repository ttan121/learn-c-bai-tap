//Write a program to calculate the value of  polynomial P: :P_n(x)=a_n x^n + a_(n-1)x^(n-1) +...+ a_1^x + a_0
#include <stdio.h>
#include <math.h>
void in(int n, int a[], int *x)
{
    printf("Enter a[%i]: \n ", n+1);
    for (int i=0; i<=n; i++)
    {
        scanf("%i", &a[i]);
    }
    printf("Enter x: ");
    scanf("%i", x);
}
int p(int n, int a[], int x)
{
    int p=0;
    for (int i=0; i<=n; i++)
    {
        p+= pow(x, i) * a[i];
    }
    return p;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%i", &n);
    int a[n+1];
    int x;
    in(n, a, &x);
    printf("P_%i(%i)=%i", n, x, p(n, a, x));
}