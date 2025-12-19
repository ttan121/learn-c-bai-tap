#include <stdio.h>
void result (int n, int *sum)
{
    int l=15;
    int d;
    printf("odd numbers is: \n");
    for (int i=1; i<=n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%i ", i);
            (*sum)+=i;
            d++;
            if (d == l)
            {
                printf("\n");
                l+=15;
            }
        }
    }
}
int main()
{
    int n, sum=0;
    printf("Enter n: ");
    scanf("%d", &n);
    result(n, &sum);
    printf("\nsum of odd numbers is: %i", sum);
    return 0;
}