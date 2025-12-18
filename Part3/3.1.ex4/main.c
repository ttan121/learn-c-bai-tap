#include <stdio.h>
int main()
{
    int a, b, min, ucln, bcnn;
    scanf("%i %i", &a, &b);
    if (a > b)
        min = b;
    else
        min = a;
    for (int i = min; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            ucln = i;
            break;
        }
    }
    bcnn = (a * b) / ucln;
    printf("The greatest common divisor is %i\n", ucln);
    printf("The least common multiple is %i\n", bcnn);

    return 0;
}
