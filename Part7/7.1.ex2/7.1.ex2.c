#include <stdio.h>
#include <string.h>

void in (char a[])
{
    printf("Nhap mot vao chuoi (toi da 1000 ki tu): ");
    scanf(" %[^\n]", a);
}
void check(char a[])
{
    int check[256]={0};
    int n=strlen(a);
    for (int i=0; i<n; i++)
    {
        unsigned char ch = a[i];
        check[ch]++;
    }
    int max=0;
    for(int i=1; i<256; i++)
    {
        if (check[max] < check[i])
            max=i;
    }
    printf("Character xuat hien nhieu nhat la: %c (so lan xuat hien %i)", max, check[max]);
}
int main()
{
    char a[1000];
    in(a);
    check(a);
}