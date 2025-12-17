#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, y = 2, sum = 0;
    long long kq = 1;
    printf("Nhap so luong so nguyen to can nhan: ");
    scanf("%i", &n);
    while (sum < n)
    {
        bool check = true;
        for (int i = 2; i < y; i++)
        {
            if (y % i == 0)
            {
                check = false;
                break;
            }
        }
        if (check == true)
        {
            printf("%i\n",y);
            sum++;
            kq *= y;
        }
        y++;
    }

    printf("Tich cua %i so nguyen to dau tien la: %lld\n", n, kq);
    return 0;
}
