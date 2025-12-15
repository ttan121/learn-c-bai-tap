#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool check(int n)
{
    int a=sqrt(n);
    if (a*a==n)
        return true;
    else return false;
}
int main()
{
    int n;
    scanf("%i",&n);
    if (check(n)) printf("Yes \n");
    else printf("No \n");
    return 0;
}
