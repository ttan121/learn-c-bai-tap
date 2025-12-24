#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ramdom (int a[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = -(rand() % 100 + 1); // tao so nguyen trong khoang [-100, -1]
    }
}
int main()
{
    srand(time(NULL));
    int n=rand() % 12 + 1;
    int a[n];
    ramdom(a, n);
    printf("Mang %i phan tu co cac so nguyen am trong khoang [-100, -1] la:\n",n);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nsend da lay la %i",time(NULL));
    return 0;
}
