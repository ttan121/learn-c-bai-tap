#include <stdio.h>

int main()
{
    int n,m;
    printf("enter size m: \n");
    while(scanf("%i",&m)!=1 || m<0)
    {
        printf("error size n please re-enter\n");
        while(getchar()!='\n');
    }
    printf("enter size n: \n");
    while(scanf("%i",&n)!=1 || n<0)
    {
        printf("error size n please re-enter\n");
        while(getchar()!='\n');
    }
    for (int i=1;i<=n;i++)
    {
        for(int y=1;y<=m;y++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
