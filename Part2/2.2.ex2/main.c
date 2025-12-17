#include <stdio.h>
#define b1 printf("31");
#define b0 printf("30");
int main()
{
    int month;
    while (1)
    {
        printf("Enter month:\n");
        scanf("%i", &month);
        if (month>0 && month<13)
        {
            switch(month)
            {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                b1; break;
            case 2: printf("28"); break;
            case 4: case 6: case 9: case 11:
                b0; break;
            }
            break;
        }
        else printf("Error value please re-enter value !\n");
    }
    return 0;
}
