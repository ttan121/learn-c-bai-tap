#include <stdio.h>
void result (int n)
{
    if (n<2)
    {
        printf("Error");
        return;
    }
    int min=-1;
    int max=-1;
    for (int i=2; i<n; i++)
    {
        if (n % i == 0)
        {
            if (min == -1)
                min=i;
            max=i;
        }
    }
    printf("biggest factor is %i", max);
    printf("\nsmallest factor is %i", min);
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%i", &n);
    result(n);
    return 0;
}