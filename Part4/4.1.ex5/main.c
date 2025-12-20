#include <stdio.h>
#include <stdbool.h>
bool check(int n)
{
    bool x=true;
    for (int i=2; i<n; i++)
    {
        if (n%i==0)
        {
            x=false;
            break;
        }
    }
    return x;
}
void result(int n)
{
    for (int i=2; i<n; i++)
    {
        if (check(i)==true)
            printf("%i ",i);
    }
}
int main()
{
    int n;
    printf("Enter number n \n");
    while(scanf("%i",&n)!=1 || n<2)
    {
        printf("error value please re-enter \n");
        while(getchar()!='\n');
    }
    printf("The prime numbers less than n are: \n");
    result(n);
    return 0;
}
