#include <stdio.h>

int main()
{
    int n;
    scanf("%i",&n);
    for (int i = 31; i >= 0; i--)
    {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    return 0;
}
