#include <stdio.h>
void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}
int main()
{
    int n;
    while (1)
    {
        scanf("%i", &n);
        if (n>=100 && n<=999)
        {
            int ht=n/100, hc=(n/10)%10, hdv=n%10, d=0;
            if (hdv > hc) swap(&hdv, &hc);
            if (hdv > ht) swap(&hdv, &ht);
            if (hc > ht) swap(&hc, &ht);
            printf("%i%i%i",hdv,hc,ht);
            break;
        }
        else printf("Error value please re-enter value !\n");
    }
    return 0;
}
