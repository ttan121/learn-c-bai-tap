#include <stdio.h>
void kq (unsigned int n)
{
    for (int i=1; i<=n; i++)
    {
        if (n%i==0) printf("%i ", i);
    }
}

int main()
{
    unsigned int n;
    scanf("%u",&n);
    kq(n);
    return 0;
}
