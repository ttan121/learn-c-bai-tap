#include <stdio.h>
struct  date
{
    int hour;
    int minute;
    int second;
};
void in(struct date *a)
{
    printf("Enter hour: ");
    scanf("%i", &a->hour);
    printf("Enter minute: ");
    scanf("%i", &a->minute);
    printf("Enter scond: ");
    scanf("%i", &a->second);
}
void prin (struct date a)
{
     if (a.hour>9)
        printf("%i:", a.hour);
    else
        printf("0%i:", a.hour);

    if (a.minute>9)
        printf("%i:", a.minute);
    else
        printf("0%i:", a.minute);
        
    if (a.second>9)
        printf("%i", a.second);
    else
        printf("0%i", a.second);
}
void check(struct  date a)
{
    if (a.hour < 24 && a.hour >= 0 && a.minute < 60 && a.minute >= 0 && a.second < 60 && a.second >= 0)
    {
        if (a.minute==59 && a.second==59)
        {
            a.hour++;
            a.minute=0;
            a.second=0;
        }
        else if (a.second==59)
        {
            a.minute++;
            a.second=0;
        }
        else
            a.second++;
        prin(a);
    }
    else
        printf("Time error");
}
int main ()
{
    struct date a;
    in(&a);
    check(a);

}