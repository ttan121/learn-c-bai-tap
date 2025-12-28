//Nhập 1 chuỗi bất kì, liệt kê xem mỗi ký tự xuất hiện mấy lần. 
#include <stdio.h>
void in(char a[])
{
    printf("Enter a string (Maximum 1000 charecters): ");
    scanf("%[^\n]", a);
}
void check(char a[])
{
    int c[256]={0};
    for (int i=0; a[i]!='\0'; i++)
    {
        unsigned char ch=a[i];
        c[ch]++;
    }
    for (int i=1; i<=256; i++)
    {
        if (c[i]>0)
            printf("charecter ""%c"" appears %i times\n", i, c[i]);
    }
}
int main()
{
    char a[1000];
    in(a);
    check(a);
}