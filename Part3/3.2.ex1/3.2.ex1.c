#include <stdio.h>
int tich(int n)
{
    int tich=1;
    do
    {
        tich *= n%10;
        n/=10;
    }
    while(n !=0 );
    return tich;
}
int tong(int n)
{
    int tong=0;
    do
    {
        tong += n%10;
        n/=10;
    }
    while(n !=0 );
    return tong;
}
void result ()
{
    for (int i=100; i<1000; i++)
    {
        if(tich(i) == tong(i))
            printf("%i ", i);
    }
}
int main()
{
    result();
    return 0;
}
