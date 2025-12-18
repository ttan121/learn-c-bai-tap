#include <stdio.h>
void result (int n)
{
    int dem=0;
    if (n > 0)
    {
        for (int i=1; i<=n; i++)
        {
            if (n%i==0)
                dem++;
        }
    }
    printf("total divisors of %i is %i", n, dem);
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%i", &n);
    result(n);
    return 0;
}