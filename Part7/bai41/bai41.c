#include <stdio.h>
#include <string.h>
void in(char a[], int *index, char c[])
{
    printf("Enter a string (Maximum 1000 charecters): ");
    scanf("%[^\n]", a);
    printf("Nhap vao vi tri can chen: ");
    scanf("%i", index);
    printf("Enter a string can chen (Maximum 1000 charecters): ");
    scanf(" %[^\n]", c);
}
void check(char a[], int index, char c[])
{
    int do_dai=strlen(a);
    printf("chuoi sau khi chen la: ");
    for (int i=0; i<=do_dai; i++)
    {
        if (i==index)
        {
            if (a[i-1]!=' ' && i>0)
                printf(" ");
            printf("%s", c);
            if (i < do_dai && a[i] != ' ') 
            {
                printf(" ");
            }
        }
       printf("%c", a[i]);
    }
}
int main()
{
    char a[1000], c[1000];
    int index;
    in(a, &index, c);
    check(a, index, c);
}