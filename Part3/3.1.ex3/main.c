#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%i", &n);
    int so_luong = 0;
    int a = 2;
    while (so_luong < n)
    {
        bool isPrime = true;
        for (int i = 2;  i < a; i++)
        {
            if (a % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d ", a);
            so_luong++;
        }
        a++;
    }
    return 0;
}
