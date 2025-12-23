#include <stdio.h>
unsigned int sum(unsigned int n)
{
    if (n==1)
        return 1;
    else
        return n+sum(n-1);
}
int main()
{
    unsigned int n;
    printf("Enter a positive integer n: ");
    scanf("%u", &n);
    printf("The sum of numbers from 1 to %i is: %i", n, sum(n));
}