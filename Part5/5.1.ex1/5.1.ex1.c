#include <stdio.h>
void result (int n)
{
    for (int i=1; i<=n; i++)
    {
        if (n % i == 0)
            printf("%i ", i);
    }
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%i", &n);
    result(n);
    return 0;
}