//Viết hàm kiểm tra xem trong 2 chuỗi có bao nhiêu ký tự giống nhau. 
#include <stdio.h>
void in(char a[])
{
    printf("Enter a string (Maximum 1000): ");
    scanf("%[^\n]", a);
    getchar();
}
int check(char a[], char c[])
{
    int c1[256]={0};
    int c2[256]={0};
    int dem=0;
    for(int i=0; a[i]!='\0'; i++)
    {
        unsigned char ch=a[i];
        c1[ch]++;
    }
    for (int i=0; c[i]!='\0'; i++)
    {
        unsigned char ch=c[i];
        c2[ch]++;
    }
    for (int i=1; i<=256; i++)
    {
        if (c2[i]>0 && c1[i]>0)
        {
            if (c1[i]<c2[i])
                dem+=c1[i];
            else
                dem+=c2[i];
        }
    }
    return dem;
}
int main()
{
    char a[1000], c[1000];
    in(a);
    in(c);
    printf("Two strings have %i identical characters.", check(a, c));
}