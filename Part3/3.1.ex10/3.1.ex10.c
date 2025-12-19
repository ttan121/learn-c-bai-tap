#include <stdio.h>
int result(int n)
{
    if (n == 0)
        return 1;
    else
        return n * result(n-1);
}
int main()
{
    int n;
    printf("Enter n: ");
    while (scanf("%i", &n) != 1 || n<0)
    {
        printf("Error n please re-enter it !\n");
        while(getchar() != '\n');
    }
    printf("%i! = %i", n, result(n));
}