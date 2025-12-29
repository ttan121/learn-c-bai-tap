#include <stdio.h>

struct info{
    char name[11];
    char gioi_tinh[4];
    double toan;
    double ly;
    double hoa;
    double tongdiem;
};
void enter_ds(struct info a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\nEnter info student %i:\n", i+1);
        printf("Enter name: ");
        scanf("%s", a[i].name);

        printf("Enter gioi tinh: ");
        scanf("%s", a[i].gioi_tinh);

        printf("Enter diem toan: ");
        scanf("%lf", &a[i].toan);

        printf("Enter diem ly: ");
        scanf("%lf", &a[i].ly);

        printf("Enter diem hoa: ");
        scanf("%lf", &a[i].hoa);

        a[i].tongdiem=a[i].toan + a[i].ly + a[i].hoa;
    }
}
void prin_ds(struct info a[], int n)
{
    int stt=0;
    printf("\nSo hoc sinh khong bi thi lai mon nao la: \n");
    for (int i=0; i<n; i++)
    {
        if (a[i].ly >= 5.0 && a[i].hoa >= 5.0 && a[i].toan>=5.0)
        {
            stt++;
            printf("\nSTT: %i", stt);
            printf("\nTen: %s", a[i].name);
            printf("\nTong diem: %.2lf\n", a[i].tongdiem);
        }
    }
    if (stt==0)
        printf("Khong co hoc sinh nao");
}
void swap(struct info  *a, struct info *b)
{
    struct info temp=*a;
    *a=*b;
    *b=temp;
}
void insertion_sort(struct info a[], int n)
{
    for (int i=1; i<n; i++)
    {
        int key=i;
        for(int j=i-1; j>=0; j--)
        {
            if (a[j].tongdiem < a[key].tongdiem)
            {
                swap(&a[j], &a[key]);
                key=j;
            }
        }
    }
}

int main()
{
    int n;
    printf("Nhap vao so hoc sinh: ");
    scanf("%i", &n);
    struct info a[n];
    enter_ds(a, n);
    insertion_sort(a, n);
    prin_ds(a, n);
    return 0;
}
