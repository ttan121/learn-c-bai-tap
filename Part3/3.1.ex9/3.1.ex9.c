#include <stdio.h>
void result(int n)
{
    printf("odd numbers which are smaller than or equal a possitive integers n is: ");
    for (int i=1; i<=n; i++)
    {
        if (i % 2 !=0)
            printf("%i ", i);
    }
}
int main()
{
    int n;
    printf("Enter n ");
    while (scanf("%i", &n) != 1 || n<0)
    {
        printf("N error please re-enter it !\n");
        while(getchar()!='\n');
    }
    result(n);
    return 0;
}