#include <stdio.h>
int check(int n, int special_number)
{
    int i=1;
    do
    {
        if (special_number==n%10)
        {
            return i;
        }
        n/=10;
        i++;
    } while (n!=0);
    return 0;
}
int main ()
{
    int n;
    int special_number;
    printf("Enter n: ");
    scanf("%i", &n);
    printf("Enter special number: ");
    scanf("%i", &special_number);
    printf("The digit %i is at the %ird position", special_number, check(n, special_number));
}