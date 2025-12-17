#include <stdio.h>

int main()
{
    double hour, wage;
    printf("Enter working hour:\n");
    while(scanf("%lf",&hour)!=1 || hour<0)
    {
        printf("Error please re-enter:\n");
        while(getchar()!='\n');
    }
   printf("Enter hourly wage:\n");
   while(scanf("%lf",&wage)!=1 || wage<0)
   {
       printf("Error please re-enter:\n");
       while(getchar()!='\n');
   }
   if (hour>40) printf("Total payment: %.3lf", (hour-40)*wage*1.5+40*wage);
   else printf("Total payment: %.3lf", hour*wage);
    return 0;
}
