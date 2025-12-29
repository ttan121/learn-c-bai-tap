#include <stdio.h>

struct date
{
    int ngay;
    int thang;
    int nam;
};
struct info
{
    char mshs[6];
    char ho_ten[31];
    struct date ngay_sinh;
    char diac_chi[51];
    char gioi_tinh[4];
    double diem_tb;
};
void enter_date(struct date *d)
{
    scanf("%i %i %i", &d->ngay, &d->thang, &d->nam);
}
void print_date(struct date *d)
{
    printf("Ngay sinh hoc sinh la: %i/%i/%i\n", d->ngay, d->thang, d->nam);
}
void enter_info(struct info *i)
{
    printf("Nhap ma so hoc sinh: ");
    scanf("%s", i->mshs);
    while(getchar()!='\n');
    printf("Nhap ho ten: ");
    scanf("%s", i->ho_ten);
    while(getchar()!='\n');
    printf("Nhap ngay sinh: ");
    enter_date(&i->ngay_sinh);
    while(getchar()!='\n');
    printf("Nhap gioi tinh:");
    scanf("%s", i->gioi_tinh);
    while(getchar()!='\n');
    printf("Nhap diem trung binh: ");
    scanf("%lf", &i->diem_tb);
}
void print_info(struct info *i)
{
    printf("Ma so hoc sinh la: %s\n", i->mshs);
    printf("Ho ten hoc sinh la: %s\n", i->ho_ten);
    print_date(&i->ngay_sinh);
    printf("Gioi tinh hoc sinh la: %s\n", i->gioi_tinh);
    printf("Diem trung binh cua hoc sinh la: %.2lf\n", i->diem_tb);
}
int main()
{
    int n;
    printf("Nhap vao so hoc sinh: \n");
    scanf("%i",&n);
    getchar();
    struct info hoc_sinh[n];
    for(int i=0; i<n; i++)
    {
        printf("\nEnter infomation cua hoc sinh %i \n\n",i+1);
        enter_info(&hoc_sinh[i]);
    }
    printf("\nCac hoc sinh duoc len lop la: \n");
    int sum=0;
    for (int i=0; i<n; i++)
    {
        if (hoc_sinh[i].diem_tb >= 5)
        {
            sum++;
            print_info(&hoc_sinh[i]);
        }
        printf("\n");
    }
    printf("Tong so hoc sinh duoc len lop la: %i\n",sum);
    return 0;
}
