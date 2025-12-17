#include <stdio.h>

int main()
{
    int n;
    printf("Enter the integer n: \n");
    while (scanf("%i", &n)!=1 || n<0)
    {
        printf("N is not integer please re-enter n !\n");
        while(getchar()!='\n');
    }
    int kq=1;
    while(int i<=n)
    {
        kq*=i;
        i++
    }
    printf("the factorials n is: %i",kq);
    return 0;
}
