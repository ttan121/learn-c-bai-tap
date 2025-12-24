#include <stdio.h>
void in_ (int n, int a[])
{
    for (int i=0; i<n; i++)
        scanf("%i", &a[i]);
}

int main()
{
    int n;
    scanf("%i", &n);
    int a[n];
    for (int i=0; i<n; i++)
        a[i]=0;
    in_(n, a);
    for (int i=0; i<n; i++)
        printf("%i ", a[i]);
    return 0;
}
