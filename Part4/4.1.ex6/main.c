#include <stdio.h>
void so_binh_phuong (int n)
{
    for(int i=1; i<=n; i++)
        printf("%i ",(i*i));
}
int main()
{
    int n;
    printf("Please enter number n \n");
    while(scanf("%i",&n)!=1 || n<0)
    {
        printf("error value please re-enter\n");
        while(getchar()!='\n');
    }
    so_binh_phuong(n);
    return 0;
}
