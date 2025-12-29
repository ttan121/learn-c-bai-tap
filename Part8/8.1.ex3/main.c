#include <stdio.h>
struct phanso
{
    int tu;
    int mau;
};
int ucln(int a, int b)
{
    while(b != 0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
struct phanso rutgon(struct phanso p)
{
    int uc = ucln(p.tu, p.mau);
    p.tu /= uc;
    p.mau /= uc;
    if (p.mau < 0) {
        p.tu = -(p.tu);
        p.mau = -(p.mau);
    }
    return p;
}
void nhap_ds(struct phanso a[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("\nNhap phan so thu %d:\n", i + 1);

        printf("Nhap vao tu so: ");
        scanf("%i", &a[i].tu);

        printf("Nhap vao mau so: ");
        while(scanf("%i", &a[i].mau)!=1 || a[i].mau==0)
        {
            printf("Loi du lieu vui long nhap lai! \n");
            while(getchar() !='\n' );
        };
        a[i] = rutgon(a[i]);
    }
}
void xuat_phanso(struct phanso p) {
    if (p.mau == 1)
        printf("%d", p.tu);
    else
        printf("%d/%d", p.tu, p.mau);
}
void xuat_ds(struct phanso a[], int n)
{
    for (int i = 0; i < n; i++) {
        xuat_phanso(a[i]);
        printf("  ");
    }
    printf("\n");
}

struct phanso tong(struct phanso a, struct phanso b)
{
    struct phanso kq;
    kq.tu = a.tu * b.mau + b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    return rutgon(kq);
}
struct phanso tich(struct phanso a, struct phanso b)
{
    struct phanso kq;
    kq.tu = a.tu * b.tu;
    kq.mau = a.mau * b.mau;
    return rutgon(kq);
}

struct phanso nghichdao(struct phanso p)
{
    struct phanso kq;
    kq.tu = p.mau;
    kq.mau = p.tu;
    if (kq.mau == 0)
        printf("Khong the nghich dao phan so co tu = 0!\n");
    return rutgon(kq);
}
struct phanso tong_ds(struct phanso a[], int n)
{
    struct phanso s = a[0];
    for (int i = 1; i < n; i++)
        s = tong(s, a[i]);
    return rutgon(s);
}
struct phanso tich_ds(struct phanso a[], int n)
{
    struct phanso s = a[0];
    for (int i = 1; i < n; i++)
        s = tich(s, a[i]);
    return rutgon(s);
}
struct phanso lonnhat(struct phanso a[], int n)
{
    struct phanso max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i].tu * max.mau > max.tu * a[i].mau)
            max = a[i];
    return max;
}
int main() {
    int n;
    printf("Nhap so luong phan so (n <= 50): ");
    while(scanf("%d", &n)!=1 || n>50)
    {
        printf("loi du lieu vui long nhap lai: \n");
        while(getchar()!='\n');
    }
    struct phanso a[50];
    nhap_ds(a, n);
    printf("\nDanh sach phan so: ");
    xuat_ds(a, n);

    printf("\nPhan so lon nhat: ");
    xuat_phanso(lonnhat(a, n));

    printf("\nTong cac phan so: ");
    xuat_phanso(tong_ds(a, n));

    printf("\nTich cac phan so: ");
    xuat_phanso(tich_ds(a, n));

    printf("\nNghich dao tung phan so:\n");
    for (int i = 0; i < n; i++) {
        xuat_phanso(nghichdao(a[i]));
        printf("  ");
    }
    printf("\n");
    return 0;
}
