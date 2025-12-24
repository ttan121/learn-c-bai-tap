#include <stdio.h>
#include <stdbool.h>
bool check(int n)
{
    if (n % 2 != 0)
        return true;
    else return false;
}
void in(int n, int a[])
{
    for(int i=0; i<n; i++)
    {
        while(scanf("%i", &a[i]) != 1)
        {
            printf("Loi du lieu vui long nhap lai: \n");
            while(getchar()!='\n');
        }
    }
}
int main()
{
    int n;
    scanf("%i", &n);
    int a[n];
    in(n, a);
    for (int i=0; i<n; i++)
    {
        if (check(a[i]))
            printf("%i ",a[i]);
    }
    return 0;
}
