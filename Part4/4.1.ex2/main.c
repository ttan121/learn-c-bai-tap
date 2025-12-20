#include <stdio.h>
unsigned sum (unsigned int n)
{
    unsigned int kq;
    for (int i=1; i<=n; i++)
        kq+=i;
    return kq;
}
int main()
{
    unsigned int n;
    scanf("%u", &n);
    printf("The sum from one to %u is %u \n",n,sum(n));
    return 0;
}
