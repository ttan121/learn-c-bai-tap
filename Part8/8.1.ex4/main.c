#include <stdio.h>
#include <string.h>

struct info{ // khoi tao gia tri kieu struct
    char name[11]; 
    char gioi_tinh[4]; //mang char thi no se thanh string
    double toan;
    double ly;
    double hoa;
    double tongdiem;
};
void enter_ds(struct info a[], int n)
{
    for (int i=0; i<n; i++) //dung vong for de truy cap vao cac phan tu cua mang a 
    { //vi du i chay 0 -> 4 
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
    printf("\nSo hoc sinh nu bi dup la: \n");
    for (int i=0; i<n; i++)
    {       //ham strcmp so sanh 2 chuoi neu no bang nhau thi tra ve gia tri 0
        if (strcmp(a[i].gioi_tinh, "nu") == 0  && a[i].tongdiem<15)
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
// xu li xap sep
void swap(struct info  *a, struct info *b)
{   // a = b va b = a
    struct info temp = (*a);
    (*a) = (*b);
    (*b) = temp; 
}
void insertion_sort(struct info a[], int n)
{
    for (int i=1; i<n; i++)
    {
        int key=i;
        for(int j=i-1; j>=0; j--)
        {
            if (a[j].tongdiem > a[key].tongdiem)
            {
                swap(&a[j], &a[key]);
                key=j;
            }
        }
    }
}
int main()
{
    int n; //khoi tao bien n de luu tru size cua mang
    printf("Nhap vao so hoc sinh: ");
    scanf("%i", &n);

    struct info a[n];

    enter_ds(a, n);         //nhap vao danh sach
    insertion_sort(a, n);   //sap xep luon mang vua nhap theo tu tu tang dan
    prin_ds(a, n);          //in ra danh sach hoc sinh la nu bi truot

    return 0;
}