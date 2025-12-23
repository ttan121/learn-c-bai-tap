#include <stdio.h>
int check(int n)
{
    if (n < 2)
        return 0;
    for(int i=2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if(check(n) == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}