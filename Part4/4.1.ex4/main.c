#include <stdio.h>
void factorial (int n)
{
    long long kq=1;
    for (int i=1; i<=n; i++)
    {
        kq*=i;
    }
    printf("The factorial of %d is %lld \n",n,kq);
}

int main()
{
    int n;
    scanf("%d",&n);
    factorial(n);
    return 0;
}
