#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a%b);
}
int bcn(int a, int b)
{
    return (a*b)/gcd(a, b);
}
int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("The greatest common goal for a and b is: %d", gcd(a, b));
    printf("The least common multiple of a and b is: %d", bcn(a, b));
}