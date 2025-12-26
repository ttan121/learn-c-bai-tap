#include <stdio.h>
void in (char a[])
{
    printf("Nhap vao mot chuoi toi da 1000 ki tu: ");
    scanf("%[^\n]", a);
}
void check (char a[])
{
    int chuoi_hien_tai[2] = {0};
    int chuoi_max[2] = {0};
    int i=0;
    do
    {
        if (a[i] != ' ' && a[i] != '\0')
        {
            if (chuoi_hien_tai[1] == 0)
                chuoi_hien_tai[0] = i;
            chuoi_hien_tai[1]++;
        }
        else
        {
            if (chuoi_max[1] < chuoi_hien_tai[1])
            {
                chuoi_max[0] = chuoi_hien_tai[0];
                chuoi_max[1] = chuoi_hien_tai[1];
            }
            chuoi_hien_tai[0] = 0;
            chuoi_hien_tai[1] = 0;
        }
        i++;
    }
    while (a[i - 1]!='\0');
    for (int j = chuoi_max[0]; j < chuoi_max[0] + chuoi_max[1]; j++)
        printf("%c", a[j]);
}
int main() 
{
    char a[1000];
    in(a);
    check(a);
}
