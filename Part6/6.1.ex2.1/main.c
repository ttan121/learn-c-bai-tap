#include <stdio.h>
int main()
{

    int a[n];
    printf("Nhap vao cac phan tu cua mang: \n");
    for (int i=0; i<n; i++)
        scanf("%i",&a[i]);
    printf("vi tri cua cac phan tu chan tu phan tu %i den phan tu %i trong day la: \n", p, q);
    for (int i=p-1; i<=q-1; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%i ",i+1);
            sum+=a[i];
        }
    }
    printf("\n");
    printf("Tong cua cac phan tu chan trong day tu %i den %i la: %i \n",p, q, sum);
    return 0;
}
