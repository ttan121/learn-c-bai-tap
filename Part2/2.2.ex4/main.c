#include <stdio.h>

int main()
{
    int n;
    while(scanf("%i",&n)!=1 || n<0 || n>9)
    {
        printf("Error value please re-enter value !\n");
        while(getchar()!='\n');
    }
    switch (n)
    {
        case 0: printf("Zero"); break;
        case 1: printf("one"); break;
        case 2: printf("Two"); break;
        case 3: printf("Three"); break;
        case 4: printf("Four"); break;
        case 5: printf("Five"); break;
        case 6: printf("Six"); break;
        case 7: printf("Seven"); break;
        case 8: printf("Eight"); break;
        case 9: printf("Nine"); break;
    }
    return 0;
}
