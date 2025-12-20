#include <stdio.h>
void check(int *hour, int *minute, int *second)
{
    if ((*second)==59)
    {
        (*second)=0;
        if((*minute)==59)
        {
            (*minute)=0;
            if((*hour)==23)
                (*hour)=0;
            else
                (*hour)++;
        }
        else
            (*minute)++;
    }
    else
        (*second)++;
}
void prin(int hour, int minute, int second)
{
    // %02i: Tự động thêm số 0 nếu số < 10, %2i la danh it nhat 2 cho de in
    printf("%02i:%02i:%02i", hour, minute, second);
}
int main()
{
    int hour, minute, second;
    printf("enter hour: ");
    scanf("%i", &hour);
    printf("enter minute: ");
    scanf("%i", &minute);
    printf("enter second: ");
    scanf("%i", &second);
    check(&hour, &minute, &second);
    prin(hour, minute, second);
    return 0;
}
