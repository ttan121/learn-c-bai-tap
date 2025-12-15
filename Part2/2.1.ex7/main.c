#include <stdio.h>

int main()
{
    int a, b, c, d=0;
    scanf("%i %i %i", &a, &b, &c);
    if (a>b){
        d=a; a=b; b=d;
    }
    if (a>c){
        d=a; a=c; c=d;
    }
    if (c>b){
        d=c; c=b; b=d;
    }
    printf("%i %i %i", a, b, c);
    return 0;
}
