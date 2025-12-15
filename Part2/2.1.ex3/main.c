#include <stdio.h>
int main()
{
    double s=0, sc, sm, kq;
    do
    {
        scanf("%lf %lf", &sc, &sm);
        s=sm-sc;
        if (s>=0)
        {
            if (s>200)
                kq=((s-200)*2500)+50*2000+50*1200+100*1000;
            else if (s>150)
                kq=((s-150)*2000)+(50*1200)+(100*1000);
            else if (s>100)
                kq=((s-100)*1200)+(100*1000);
            else if (s<=100)
                kq=s*1000;
            printf("%.3lf - %.3lf = %.3lf\n", sm, sc, s);
            printf("%.3lfVND", kq);
            break;
        }
        else printf("Error value please re-enter ");
    }
    while (1);
    return 0;
}
