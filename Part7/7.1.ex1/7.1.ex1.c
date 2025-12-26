#include <stdio.h>
#include <string.h>
void in (char a[])
{
    printf("Nhap mot vao chuoi (toi da 1000 ki tu): ");
    scanf(" %[^\n]", a);
}
void prin(char a[], int n)
{
    for (int i=n-1; i>=0; i--)
        printf("%c", a[i]);
}
int main() {
    char a[1000];
    in(a);
    int n = strlen(a);
    prin(a, n);
    return 0;
}