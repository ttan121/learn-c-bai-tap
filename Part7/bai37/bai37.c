#include <stdio.h>
int skt(char a[])
{
    if (a[0]=='\0')
        return 0;
    return 1+skt(a+1);
}
void in(char a[])
{
    printf("Enter a string (maximum 1000 charecters): ");
    scanf("%[^\n]", a);
}
void prin(char a[])
{
    for (int i=skt(a)-1; i>=0; i--)
        printf("%c", a[i]);
}
int main()
{
    char a[1000];
    in(a);
    skt(a);
    prin(a);
}
