#include <stdio.h>

int main()
{
    int day, month, year;
    while (1)
    {
        scanf("%i %i %i", &day, &month, &year);
        if (day>0 && day<=31 && month>0 && month<=12 && year>0 && year<10000)
        {
            printf("%i/%i/%i\n", day, month, year);
            break;
        }
        else printf("Error value please re-enter value ! \n");
    }
    return 0;
}
