#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter a positive integers value n: \n");
    while(scanf("%i",&n)!=1 || n<0)
    {
        printf("n is not positive integers please re-enter\n");
        while(getchar()!='\n');
    }
    for (int i=1; i<=n; i++)
    {
        sum+=i;
    }
    printf("%i",sum);
    return 0;
}
