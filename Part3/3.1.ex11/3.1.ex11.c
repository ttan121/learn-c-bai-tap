#include <stdio.h>
int main()
{
    int sum=0;
    int n;
    printf("Enter integers (enter 0 to stop enter): \n");
    do
    {
        scanf("enter n: ");
        while(scanf("%i", &n) != 1 || n < 0)
        {
            while(getchar() != '\n');
        }
        sum+=n;
    } while (n!=0);
    printf("%i", sum);
}