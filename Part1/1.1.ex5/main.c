#include <stdio.h>

main()
{
    int a, b;
    scanf("%i %i", &a, &b);
    if (b==0)
        printf(" a+b=%i\n a-b=%i\n a*b=%i\n a/b=error!", a+b, a-b, a*b);
    else
        printf(" a+b=%i\n a-b=%i\n a*b=%i\n a/b=%.2f", a+b, a-b, a*b,(double) a/b);
    return 0;
}
