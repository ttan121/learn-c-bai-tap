#include <stdio.h>
int check(int n)
{
    if (n < 2)
        return 0;
    else
    {
        for (int i=2; i<n; i++)
        {
            if (n % i == 0)
                return 0;
        }
    }
    return 1;
}
void check_array(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(check(a[i]) == 1)
            printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    printf("Enter size for array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements for array: \n");
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    check_array(a, n);
    return 0;
}