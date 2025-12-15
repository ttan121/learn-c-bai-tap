#include <stdio.h>

int main()
{
    int n,a;
    while (1)
    {
        scanf("%i",&n);
        if (n>=100 && n<=999)
        {
            a=0;
            int ht=n/100;
            int hc=(n/10)%10;
            int hdv=n%10;
            if (ht>a) a=ht;
            if (hc>a) a=hc;
            if (hdv>a) a=hdv;
            printf("%i",a);
            break;
        }
    }
    return 0;
}
