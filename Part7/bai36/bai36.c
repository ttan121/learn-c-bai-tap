#include <stdio.h>
#include <string.h>
int bo_khoang_trang_dau(char a[])
{
    int i=0;
    while (a[i]==' ')
        i++;
    return i;
}
int bo_khoang_trang_cuoi(char a[], int start)
{
    int x=strlen(a)-1;
    int y=x;
    for (int i=y; i>=start && a[i]==' '; i--)
        y--;
    return y;
}
void chu_thuong(char a[], int start, int end)
{
    for (int i=start; i<=end; i++)
    {
        if (a[i]>='A' && a[i]<='Z')
            a[i]+=32;
    }
}
void chu_hoa(char a[], int start, int end)
{
    for (int i=start; i<=end; i++)
    {
        if (a[i-1]==' ' || i==start)
            a[i]-=32;
    }

}
void prin(char a[], int start, int end)
{
    for (int i=start; i<=end; i++)
        printf("%c", a[i]);
}
void chuan_hoa_name(char a[])
{
    int start=bo_khoang_trang_dau(a);
    int end=bo_khoang_trang_cuoi(a, start);
    chu_thuong(a, start, end);
    chu_hoa(a, start, end);
    prin(a, start, end);
}
int main()
{
    char a[1000];
    printf("Enter a string (Maximum 1000 characters): ");
    scanf("%[^\n]", a);
    chuan_hoa_name(a);
}