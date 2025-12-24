#include <stdio.h>

int main()
{
    int n;
    printf("enter size array: \n");
    scanf("%i", &n);
    double a[n];
    for(int i=0; i<n; i++)
        scanf("%lf", &a[i]);
    for(int i=0; i<n; i++)
        printf("%.3lf ", a[i]);
    return 0;
}
