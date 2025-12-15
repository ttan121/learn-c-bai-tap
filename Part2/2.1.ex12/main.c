#include <stdio.h>
#include <stdbool.h>
bool year(int n)
{
    if (n%400==0)
    {
        return true;
    }
    if (n%4==0 && n%100!=0)
    {
        return true;
    }
    else return false;
}
int main()
{
    int n;
    scanf("%i", &n);
    if (year(n)) printf("is a leap year");
    else printf("Is don't a leap year");
    return 0;
}
