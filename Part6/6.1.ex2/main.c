#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void nhap_vao (int n, int a[]) //1
{
    printf("Nhap vao cac phan tu cua mang: \n");
    for(int i=0; i<n; i++)
        scanf("%i", &a[i]);
}
void in_ra (int n, int a[]) //2
{
    printf("Cac phan tu trong mang la: \n");
    for(int i=0; i<n; i++)
        printf("%i ", a[i]);
    printf("\n");
}
void chi_so_lon_nhat(int n, int a[]) //3
{
    int kq=a[0], chi_so=0;
    for (int i=0; i<n; i++)
    {
        if (a[i] >= kq)
        {
            kq = a[i];
            chi_so = i;
        }
    }
    printf("chi so cua phan tu lon nhat trong day la %i\n",chi_so);
}
void so_lon_nhat (int n, int a[n]) //4
{
    int kq=a[0], chi_so=0;
    for (int i=0; i<n; i++)
    {
        if (a[i] >= kq)
        {
            kq = a[i];
            chi_so = i;
        }
    }
    printf("So lon nhat trong day la %i co chi so la %i \n",kq,chi_so);
}
void so_nho_nhat (int n, int a[n]) //5
{
    int kq=a[0], chi_so=0;
    for (int i=0; i<n; i++)
    {
        if (kq > a[i])
        {
            kq = a[i];
            chi_so = i;
        }
    }
    printf("So nho nhat trong day la %i co chi so la %i \n",kq,chi_so);
}
bool check (int n)
{
    bool c=true;
    if (n<2)
        return false;
    else
    {
        for (int i=2; i<n; i++)
        {
            if (n%i == 0)
            {
                c = false;
                break;
            }
        }
        return c;
    }
}
void so_nguyen_to (int n, int a[]) //6
{
    printf("Cac so nguyen to trong day la: \n");
    for(int i=0; i<n; i++)
    {
        if (check(a[i]) == true)
            printf("%i ", a[i]);
    }
    printf("\n");
}
void tong_nguyen_to (int n, int a[n]) //7
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if (check(a[i]) == true)
            sum+=a[i];
    }
    printf("tong cua cac so nguyen to trong day la: %i \n", sum);
}
void tb_nguyen_to (int n, int a[n]) //8
{
    double sum=0, so=0;
    for(int i=0; i<n; i++)
    {
        if (check(a[i]) == true)
        {
            sum+=a[i];
            so++;
        }
    }
    if (so==0)
        printf("khong co so nguyen to nao \n");
    else
        printf("tong trung binh cua tat ca cac so nguyen to trong day la: %lf \n", (sum/so));
}
void phan_tu_chan_chia_het_cho_3 (int n, int a[]) //9
{
    int sum=0;
    printf("Cac phan tu chan chia het cho 3 la: \n");
    for (int i=0; i<n; i++)
    {
        if (a[i]%2==0 && a[i]%3==0)
            sum+=a[i];
    }
    printf("Tong cac phan tu chan chia het cho 3 la: %i \n",sum);
}
void trung_binh_cua_phan_tu_le(int n, int a[]) //10
{
    double sum=0,so=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]%2 != 0)
        {
            sum += a[i];
            so ++;
        }
    }
    if (so==0)
        printf("khong co so le nao \n");
    else
        printf("So trung binh cua tat ca cac phan tu le la: %lf \n", (sum/so));
}
bool check_cp(int n)
{
    if (n == pow( ((int)sqrt(n)), 2) )
        return true;
    else return false;
}
void tong_chinh_phuong(int n, int a[]) //11
{
    int sum=0;
    for (int i=0; i<n; i++)
    {
        if (check_cp(a[i]) == true)
            sum+=a[i];
    }
    printf("tong cac so chinh phuong trong day la: %i\n",sum);
}
void so_chinh_phuong(int n, int a[]) //12
{
    printf("Cac so chinh phuong co trong day la: \n");
    for (int i=0; i<n; i++)
    {
        if (check_cp(a[i]) == true)
            printf("%i ", a[i]);
    }
    printf("\n");
}
void tang_dan(int n, int a[]) //13
{
    for(int i=1; i<n; i++)
    {
        int key=a[i];
        int j=i-1;
        while (j>=0 && a[j] > key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    in_ra(n, a);
}
void giam_dan(int n, int a[])
{
    for(int i=1; i<n; i++)
    {
        int key=a[i];
        int j=i-1;
        while (j>=0 && a[j] < key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    in_ra(n, a);
}
void le_tang_chan_giam(int n, int a[]) //14
{
    int l[n], chi_so_l=0, c[n], chi_so_c=0;
    for (int i=0; i<n; i++)
    {
        if ((int)fabs(a[i]) % 2 != 0)
        {
            l[chi_so_l]=a[i];
            chi_so_l++;
        }
        else
        {
            c[chi_so_c]=a[i];
            chi_so_c++;
        }
    }
    printf("cac so le theo thu tu tang dan la \n");
    tang_dan(chi_so_l, l);
    printf("cac so chan theo thu tu giam dan la \n");
    giam_dan(chi_so_c, c);
}
void khoang_chan(int n, int a[])
{
    int p, q;
    printf("Nhap vao do dai p -> q: \n");
    int sum=0;
    while(scanf("%i %i", &p, &q) != 2 || p<0 || q<0)
    {
        printf("Loi du lieu vui long nhap lai: \n");
        while(getchar()!='\n')
            break;
    }
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
}
int main()
{
    int n;
    printf("Nhap vao size n: \n");
    while(scanf("%i", &n) != 1 || n<0)
    {
        printf("Loi du lieu vui long nhap lai");
        while(getchar()!='\n');
    }
    int a[n];
    nhap_vao(n, a);     //1
    in_ra(n, a);        //2
    chi_so_lon_nhat(n, a);      //3
    so_lon_nhat(n, a);      //4
    so_nho_nhat(n, a);      //5
    so_nguyen_to(n, a);     //6
    tong_nguyen_to(n, a);       //7
    tb_nguyen_to(n, a);     //8
    phan_tu_chan_chia_het_cho_3(n, a);      //9
    trung_binh_cua_phan_tu_le(n, a);        //10
    tong_chinh_phuong(n, a);        //11
    so_chinh_phuong(n, a);      //12
    tang_dan(n, a);     //13
    le_tang_chan_giam(n, a);        //14
    khoang_chan(n, a);         //15
    return 0;
}
