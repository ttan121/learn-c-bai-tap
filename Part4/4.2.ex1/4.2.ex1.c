#include <stdio.h>
int result(int n)
{
    int result=0;
    int f1=1;
    int f2=1;
    if (n < 3 && n > 0)
        return 1;
    else
    {
        for(int i=3; i<=n; i++)
        {
            result=f1+f2;
            f1=f2;
            f2=result;
        }
    }
    return result;
}
int main()
{
    int n;
    printf("Enter value: ");
    scanf("%i", &n);
    printf("F(%i)=%i", n, result(n));
}